#include "Player.h"

Player::Player(): {}

Player::~Player() {}

Player::playTurn(int round) {

	std::vector<Card> possibleCards = getPossibleCards();
	Card playedCard = strategies.at(round).chooseCard();
	playedCards.insert(playedCard);
	hand.remove(playedCard);
	if (round == 0 || round == 2)
		leftNeighbor.getNewHand(hand);
	else
		rightNeighbor.getNewHand(hand);
}
