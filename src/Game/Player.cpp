#include "../../include/game/Player.h"
#include <iostream>

Player::Player() : gold(3) {}
Player::~Player() {}

void Player::setLeft(std::shared_ptr<Player> _leftNeighbor) {
	leftNeighbor = _leftNeighbor;
}

void Player::setRight(std::shared_ptr<Player> _rightNeighbor) {
	rightNeighbor = _rightNeighbor;
}

void Player::setStrategy(int rund) {
	std::string _strategy = strategies.at(rund);
	currentStrategy = std::shared_ptr<Strategy>(strategyFactory.getStrategy(_strategy));
}

void Player::addToHand(std::shared_ptr<Card> newCard) {

	hand.push_back(newCard);
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

int Player::canAfford(std::shared_ptr<Card> card) {

	if (*(card->getResourceCost()) > resource) 
		return 0;
	if (card->getGoldCost() > gold)
		return 0;
	else
		return 1;
}

void Player::discard() {

	srand (time(NULL));
	int index = rand() % hand.size();
	hand.erase(hand.begin() + index);
	gold += 4;
}

std::vector<std::shared_ptr<Card>> Player::getPossibleCards() {

	std::vector<std::shared_ptr<Card>> possibleCards;

	for (auto const& it:hand) {
		if (canAfford(it))
			possibleCards.push_back(it);
	}

	return possibleCards;
}

void Player::initStrategies(std::vector<std::string> _strategies) {
	strategies = _strategies;
}


void Player::playMilitaryCard() {
	military.addStrength(card->getStrength());
}

void Player::playScienceCard() {
	science.addCard(card->getCategory());
}

void Player::play(std::string type) {

	if (type == "military")
		playMilitaryCard(card);
	if (type == "science")
		playScienceCard(card);
	if (type == "blue")
		playBlueCard(card);
	if (type == "resource")
		playResourceCard(card);
}

void Player::playTurn(int round) {

	int playedCardIndex = 0;
	if (getPossibleCards().size() == 0) 
		discard();
	else {
		playedCardIndex = currentStrategy->chooseCardToPlay(getPossibleCards());
		play(hand.at(playedCardIndex));
		playedCards.push_back(hand.at(playedCardIndex));
		hand.erase(hand.begin() + playedCardIndex);
	}
}

void Player::endRound(int round) {
	if (round == 0 || round == 2)
		leftNeighbor->getNewHand(hand);
	else
		rightNeighbor->getNewHand(hand);

}

void Player::getNewHand(std::vector<std::shared_ptr<Card>> newHand) {
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


