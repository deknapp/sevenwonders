#include "Player.h"

Player::Player() {}

Player::~Player() {}

int Player::canAfford(Card card) {

	if (card.cost() > resource) 
		return 0;
	else
		return 1;
}

std::vector<Card> Player::getPossibleCards(){

	std::vector<Card> possibleCards;

	for (const& auto it:hand) {
		if (it.canAfford())
			possibleCards.push_back(it);
	}

	return possibleCards;
}

void Player::playTurn(int round) {

	Card playedCard = strategies.at(round).chooseCard(getPossibleCards());
	playedCards.insert(playedCard);
	hand.remove(playedCard);
	if (round == 0 || round == 2)
		leftNeighbor.getNewHand(hand);
	else
		rightNeighbor.getNewHand(hand);
}
