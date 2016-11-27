#include "../../include/game/Player.h"
#include <iostream>

Player::Player(int name) : name(std::to_string(name)), hand(std::shared_ptr<Deck>(new Deck())), resource(std::shared_ptr<Resource>(new Resource())), gold(3) {}
Player::~Player() {}

void Player::addRandomCardToHand(std::shared_ptr<Deck> deck) {

	int selector = randomInt(4000);
	if (selector < 1000) 
		hand->addScienceCard(deck->getScienceCard());
	else if (selector < 2000)
		hand->addBlueCard(deck->getBlueCard());
	else if (selector < 3000)
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
	sum += science.score() + military.getScore() + gold/3 + bluePoints;
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
	std::cout << "gold score is " << gold/3 << std::endl;
	std::cout << "blue points score is " << bluePoints << std::endl;

}

void Player::discard() {
	hand->discard();
	gold += 3;
}

void Player::initStrategies(std::vector<std::string> _strategies) {
	strategies = _strategies;
}

void Player::playResourceCard() {
	std::shared_ptr<ResourceCard> card = affordableHand->getResourceCard();
	if (card) {
		std::cout << "playing ResourceCard " << std::endl;
		std::shared_ptr<Resource> value = card->getResourceCost();
		resource->addCard(value->wood, value->stone, value->brick, value->ore, value->glass, value->paper, value->carpet);
		playedCards.insert(card->getName());
	}

	else
		discard();
}

void Player::playMilitaryCard() {
	
	std::shared_ptr<MilitaryCard> card = affordableHand->getMilitaryCard();
	if (card) {
		std::cout << "playing MilitaryCard " << std::endl;
		military.addStrength(card->getStrength());
		playedCards.insert(card->getName());
	}
	else 
		discard();
}

void Player::playScienceCard() {
	
	std::shared_ptr<ScienceCard> card= affordableHand->getScienceCard();
	if (card) {
		std::cout << "playing ScienceCard " << std::endl;
		science.addCard(card->getCategory());
		playedCards.insert(card->getName());
	}
	else 
		discard();
}

void Player::playBlueCard() {
	
	std::shared_ptr<BlueCard> card = affordableHand->getBlueCard();
	if (card) {
		std::cout << "playing BlueCard " << std::endl;
		bluePoints += card->getPoints();
		playedCards.insert(card->getName());
	}
	else 
		discard();
}

void Player::playRandomCard() {
	int selector = randomInt(4000);
	if (selector < 1000)
		playResourceCard();
	else if (selector < 2000)
		playMilitaryCard();
	else if (selector < 3000)
		playScienceCard();
	else if (selector < 4000)
		playBlueCard();
	else
		discard();
}

void Player::play(std::string strategy) {

	if (strategy == "resource")
		playResourceCard();
	if (strategy == "military")
		playMilitaryCard();
	if (strategy == "science")
		playScienceCard();
	if (strategy == "blue")
		playBlueCard();
	if (strategy == "random")
		playRandomCard();
	else
		discard();
}

void Player::playTurn(int round) {

	affordableHand = hand->getAffordableCards(resource, gold, playedCards);

	if (round == 0)
		play(strategies.at(round));
	if (round == 1)
		play(strategies.at(round));
	if (round == 2)
		play(strategies.at(round));
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


