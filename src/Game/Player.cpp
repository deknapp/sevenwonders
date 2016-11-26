#include "../../include/game/Player.h"
#include <iostream>

Player::Player() : gold(3) {}
Player::~Player() {}

void Player::addToHand(std::shared_ptr<Deck> deck) {

	int selector = randomInt(3);
	if (selector == 0) {

		hand->addScienceCard(deck->getScienceCard());
	}
	if (selector == 1)
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
	std::cout << "score is " << score() << std::endl;
	
}

void Player::discard() {

	hand->discard();
	gold += 3;
}

void Player::initStrategies(std::vector<std::string> _strategies) {
	strategies = _strategies;
}

void Player::playResourceCard() {
	std::shared_ptr<ResourceCard> card = hand->buyResourceCard(gold);
	if (card) {
		std::shared_ptr<Resource> value = card->getResourceCost();
		resource->addCard(value->wood, value->stone, value->brick, value->ore, value->glass, value->paper, value->carpet);
	}
	else
		discard();
}

void Player::playMilitaryCard() {
	std::shared_ptr<MilitaryCard> card = hand->buyMilitaryCard(resource);
	if (card)
		military.addStrength(card->getStrength());
}

void Player::playScienceCard() {
	std::shared_ptr<ScienceCard> card= hand->buyScienceCard(resource);
	if (card)
		science.addCard(card->getCategory());
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


