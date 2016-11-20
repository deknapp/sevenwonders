#ifndef Player_H
#define Player_H

#include <vector>

#include "Card.h"
#include "Player.h"
#include "Wonder.h"


class Player {

 public:
	Player();
	~Player();
	init(Wonder wonder);
	playTurn(int round);

 private:

 	std::vector<Strategy> strategies;
 	std::string name;
 	std::vector<Card> hand;
 	std::vector<Card> nextHand;
 	std::set<Card> playedCards;
 	Player leftNeighbor;
 	Player rightNeighbor;
 	Wonder wonder;
 	Card wonderCard;
 	int cash;

 	// prevent generated functions --------------------------------------------
	Player(const Player&);
	Player& operator=(const Player&);
};

#endif /* Player_H */

