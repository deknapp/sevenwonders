#include "../../include/game/Player.h"

Player::Player() : gold(3) {}
Player::~Player() {}

void Player::setStrategy(std::string _strategy) {
	strategy = std::shared_ptr<Strategy>(new Strategy(_strategy));
}

void Player::addToHand(std::shared_ptr<Card> newCard) {

	hand.push_back(newCard);
}

int Player::score() {

	int sum = 0;
	sum += science.score() + military.score();
}

int Player::canAfford(std::shared_ptr<Card> card) {

	if (card.cost() > resource) 
		return 0;
	else
		return 1;
}

void Player::discard() {

	srand (time(NULL));
	index = rand() % cards.length();
	std::shared_ptr<Card> = hand.at(index);
	money += 4;
}

std::vector<std::shared_Ptr<Card>> Player::getPossibleCards(){

	std::vector<Card> possibleCards;

	for (const& auto it:hand) {
		if (it.canAfford())
			possibleCards.push_back(it);
	}

	return possibleCards;
}

void Player::playTurn(int round) {

	std::shared_ptr<Card> playedCard;
	if (getPossibleCards.length() == 0) {
		discard();
	}
	else {
		playedstd::shared_ptr<Card> = strategies.at(round).chooseCard(getPossibleCards());
		playedCards.insert(playedCard);
	}
	hand.remove(playedCard);
	if (round == 0 || round == 2)
		leftNeighbor.getNewHand(hand);
	else
		rightNeighbor.getNewHand(hand);
}

void Player::updateMilitaryPoints(int round) {

	int newPoints = 0;
	int bonus = 1;
	if (round == 1)
		bonus = 3;
	if (round == 2) 
		bonus = 5;

	if (leftNeighbor.strength() < strength)
		newPoints += bonus;
	else
		newPoints -= 1;

	if (rightNeighbor.strength() < strength)
		newPoints += bonus;
	else
		newPoints -= 1;

}

void Player::strength() {

	return military.strength();
}
