#ifndef Player_H
#define Player_H

#include <vector>

#include "../cards/Card.h"

class Player {

 public:
	Player();
	~Player();
	init(Wonder wonder);
	playTurn(int round);
	void updateMilitaryPoints();
	void addToHand(Card newCard);
	int strength();

 private:

 	std::vector<Strategy> strategies;
 	std::string name;
 	std::vector<Card> hand;
 	std::vector<Card> nextHand;
 	std::set<Card> playedCards;
 	Player leftNeighbor;
 	Player rightNeighbor;
 	Strategy strategy;
 	int gold;

 	// prevent generated functions --------------------------------------------
	Player(const Player&);
	Player& operator=(const Player&);
};

#endif /* Player_H */

