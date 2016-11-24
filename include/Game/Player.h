#ifndef Player_H
#define Player_H

#include <vector>

#include "../cards/Card.h"
#include "../strategies/Strategy.h"

class Player {

 public:
	Player();
	~Player();
	void playTurn(int round);
	void updateMilitaryPoints();
	void addToHand(std::shared_ptr<Card> newCard);
	int strength();
	void setLeft(std::shared_ptr<Player> leftNeighbor);
	void setRight(std::shared_ptr<Player> rightNeighbor);
	void setStrategy(std::string _strategy);
	int score();

 private:

 	std::vector<Strategy> strategies;
 	std::string name;
 	std::vector<std::shared_ptr<Card>> hand;
 	std::vector<std::shared_ptr<Card>> nextHand;
 	std::vector<std::shared_ptr<Card>> playedCards;
 	std::shared_ptr<Player> leftNeighbor;
 	std::shared_ptr<Player> rightNeighbor;
 	std::shared_ptr<Strategy> strategy;
 	int gold;

 	// prevent generated functions --------------------------------------------
	Player(const Player&);
	Player& operator=(const Player&);
};

#endif /* Player_H */

