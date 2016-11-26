#include "../../include/game/Player.h"
#include <iostream>

Player::Player() : hand(std::shared_ptr<Deck>(new Deck())), gold(3) {}
Player::~Player() {}

void Player::addToHand(std::shared_ptr<Deck> deck) {

	int selector = randomInt(1000);
	std::cout << "selector is " << selector << std::endl;
	if (selector < 200) {
		hand->addScienceCard(deck->getScienceCard());
	}
	if (selector < 800)
		hand->addResourceCard(deck->getResourceCard());
	else 
		hand->addMilitaryCard(deck->getMilitaryCard());
}

void Player::setLeft(std::shared_ptr<Player> _leftNeighbor) {
	leftNeighbor = _leftNeighbor;
}

void Player::setRight(std::shared_ptr<Player> _rightNeighbor) {
	rightNeighbor = _rightNeighbor;
}

int Player::score() {

	int sum = 0;
	sum += science.score() + military.getScore();
	return sum;
}

void Player::print() {

	std::cout << "Strategies are ";;
	for (const auto& strategy:strategies) {
		std::cout << strategy << " ";
	}
	std::cout << std::endl;

}

void Player::printScore() {
	print();
	std::cout << "science score is " << science.score() << std::endl;
	std::cout << "military score is " << military.getScore() << std::endl;
}

void Player::discard() {
	std::cout << "discarding" << std::endl;
	hand->discard();
	gold += 3;
}

void Player::initStrategies(std::vector<std::string> _strategies) {
	strategies = _strategies;
}

void Player::playResourceCard() {
	std::shared_ptr<ResourceCard> card = hand->getResourceCard();
	if (card) {
		std::cout << "playing ResourceCard" << std::endl;
		std::shared_ptr<Resource> value = card->getResourceCost();
		resource->addCard(value->wood, value->stone, value->brick, value->ore, value->glass, value->paper, value->carpet);
	}

	else
		discard();
}

void Player::playMilitaryCard() {
	
	std::shared_ptr<MilitaryCard> card = hand->getMilitaryCard();
	if (card) {
		std::cout << "playing MilitaryCard" << std::endl;
		military.addStrength(card->getStrength());
	}
	else 
		discard();
}

void Player::playScienceCard() {
	
	std::shared_ptr<ScienceCard> card= hand->getScienceCard();
	if (card) {
		std::cout << "playing ScienceCard" << std::endl;
		science.addCard(card->getCategory());
	}
	else 
		discard();
}

void Player::play(std::string type) {

	if (type == "resource")
		playResourceCard();
	if (type == "military")
		playMilitaryCard();
	if (type == "science")
		playScienceCard();
	else
		discard();
}

void Player::playTurn(int round) {

	if (round == 0)
		play("resource");
	if (round == 1)
		play("science");
	if (round == 2)
		play("military");
}

void Player::endRound(int round) {
	if (round == 0 || round == 2)
		leftNeighbor->getNewHand(hand);
	else
		rightNeighbor->getNewHand(hand);
}

void Player::getNewHand(std::shared_ptr<Deck> newHand) {
	hand = newHand;
}

int Player::strength() {

	return military.getStrength();
}

void Player::updateMilitaryPoints(int round) {

	int newPoints = 0;
	int bonus = 1;
	if (round == 1)
		bonus = 3;
	if (round == 2) 
		bonus = 5;

	if (leftNeighbor->strength() < strength())
		newPoints += bonus;
	if (leftNeighbor->strength() > strength())
		newPoints -= 1;

	if (rightNeighbor->strength() < strength())
		newPoints += bonus;
	if (rightNeighbor->strength() > strength())
		newPoints -= 1;

	military.addPoints(newPoints);
}


