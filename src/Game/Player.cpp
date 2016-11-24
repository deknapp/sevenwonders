#include "../../include/game/Player.h"

Player::Player() : gold(3) {}
Player::~Player() {}

void Player::setStrategy(std::string _strategy) {
	strategy = strategyFactory.getStrategy(_strategy);
}

void Player::addToHand(std::shared_ptr<Card> newCard) {

	hand.push_back(newCard);
}

int Player::score() {

	int sum = 0;
	sum += science.score() + military.getScore();
	return sum;
}

int Player::canAfford(std::shared_ptr<Card> card) {

	if (card->getResourceCost() > resource) 
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

void Player::playTurn(int round) {

	int playedCardIndex = 0;
	if (getPossibleCards().size() == 0) {
		discard();
	}
	else {
		setStrategy(strategies.at(round));
		playedCardIndex = currentStrategy->chooseCardToPlay(getPossibleCards());
		playedCards.push_back(hand.at(playedCardIndex));
		hand.erase(hand.begin() + playedCardIndex);
	}
	hand.erase(hand.begin() + playedCardIndex);
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
	else
		newPoints -= 1;

	if (rightNeighbor->strength() < strength())
		newPoints += bonus;
	else
		newPoints -= 1;
}


