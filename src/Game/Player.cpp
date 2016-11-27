#include "../../include/game/Player.h"
#include <iostream>

Player::Player(int name) : name(std::to_string(name)), hand(std::shared_ptr<Deck>(new Deck())), resource(std::shared_ptr<Resource>(new Resource())), 
						   resourcesToTradeFor(std::shared_ptr<Resource>(new Resource())) {}
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
	sum += science.score() + military.getScore() + resource->gold/3 + bluePoints;
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
	std::cout << "gold score is " << resource->gold/3 << std::endl;
	std::cout << "blue points score is " << bluePoints << std::endl;

}

void Player::discard() {
	hand->discard();
	resource->gold += 3;
}

void Player::initStrategies(std::vector<std::string> _strategies) {
	strategies = _strategies;
}

int Player::playResourceCard() {
	std::shared_ptr<ResourceCard> card = affordableHand->getResourceCard();
	if (card) {
		std::cout << "playing ResourceCard " << std::endl;
		std::shared_ptr<Resource> value = card->getResourceCost();
		resource = resource->addTo(value);
		playedCards.insert(card->getName());
		return 1;
	}
	else 
		return 0;
}

int Player::playMilitaryCard() {
	
	std::shared_ptr<MilitaryCard> card = affordableHand->getMilitaryCard();
	if (card) {
		std::cout << "playing MilitaryCard " << std::endl;
		military.addStrength(card->getStrength());
		playedCards.insert(card->getName());
		return 1;
	}
	else 
		return 0;
}

int Player::playScienceCard() {
	
	std::shared_ptr<ScienceCard> card = affordableHand->getScienceCard();
	if (card) {
		std::cout << "playing ScienceCard " << std::endl;
		science.addCard(card->getCategory());
		playedCards.insert(card->getName());
		return 1;
	}
	else 
		return 0;
}

int Player::playBlueCard() {
	
	std::shared_ptr<BlueCard> card = affordableHand->getBlueCard();
	if (card) {
		std::cout << "playing BlueCard " << std::endl;
		bluePoints += card->getPoints();
		playedCards.insert(card->getName());
		return 1;
	}
	else 
		return 0;
}

int Player::playFight() {

	int success = playMilitaryCard();
	if (success == 0)
		success = playGreedy();
	return success;
}

int Player::playGreedy() {

	int success = playBlueCard();
	if (success == 0)
		success = playScienceCard();
	if (success == 0)
		success = playMilitaryCard();
	if (success == 0)
		success = playResourceCard();
	return success;
}

void Player::playRandomCard(int recursion_depth) {

	if (recursion_depth > 5)
		return;

	int selector = randomInt(4000);
	int success = 0;
	if (selector < 1000)
		success = playResourceCard();
	else if (selector < 2000)
		success = playMilitaryCard();
	else if (selector < 3000)
		success = playScienceCard();
	else if (selector < 4000)
		success = playBlueCard();
	else
		playRandomCard(recursion_depth + 1);
}

void Player::play(std::string strategy) {

	int success = 0;
	if (strategy == "resource")
		success = playResourceCard();
	if (strategy == "military")
		success = playMilitaryCard();
	if (strategy == "science")
		success = playScienceCard();
	if (strategy == "blue")
		success = playBlueCard();
	if (strategy == "greedy")
		success = playGreedy();
	if (strategy == "fight")
		success = playFight();
	if (success == 0)
		playRandomCard(0);
}

std::shared_ptr<Resource> Player::getResource() {
	return resource;
}

void Player::playTurn(int round) {

	resourcesToTradeFor->addTo(leftNeighbor->getResource());
	resourcesToTradeFor->addTo(rightNeighbor->getResource());

	affordableHand = hand->getAffordableCards(resource, resourcesToTradeFor, playedCards);
	
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


