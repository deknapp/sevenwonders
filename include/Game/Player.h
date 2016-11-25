#ifndef Player_H
#define Player_H

#include <vector>
#include <string>

#include "../cards/Card.h"

#include "../cards/BlueCard.h"
#include "../cards/MilitaryCard.h"
#include "../cards/ResourceCard.h"
#include "../cards/ScienceCard.h"

#include "../components/Military.h"
#include "../components/Science.h"
#include "../strategies/Strategy.h"

#include "../strategies/StrategyFactory.h"

class Player {

 public:
	Player();
	~Player();
	int canAfford(std::shared_ptr<Card> card);
	void playTurn(int round);
	void updateMilitaryPoints();
	void addToHand(std::shared_ptr<Card> newCard);
	int strength();
	void setLeft(std::shared_ptr<Player> leftNeighbor);
	void setRight(std::shared_ptr<Player> rightNeighbor);
	void initStrategies(std::vector<std::string> strategies);
	void setStrategy(int rund);
	int score();
	void discard();
	void getNewHand(std::vector<std::shared_ptr<Card>> hand);
	std::vector<std::shared_ptr<Card>> getPossibleCards();
	void updateMilitaryPoints(int round);
	void endRound(int round);
	void printScore();
	void print();
	

 private:


 	void play(std::shared_ptr<Card> card);
 	void playMilitaryCard(std::shared_ptr<MilitaryCard> card);
 	void playScienceCard(std::shared_ptr<ScienceCard> card);

 	// void playResourceCard(std::shared_ptr<ResourceCard> card);
 	// void playBlueCard(std::shared_ptr<BlueCard> card);

 	StrategyFactory strategyFactory;
 	std::shared_ptr<Strategy> currentStrategy;
 	std::vector<std::string> strategies;
 	std::string name;
 	Deck hand;
 	Deck nextHand;
 	Deck playedCards;
 	std::shared_ptr<Player> leftNeighbor;
 	std::shared_ptr<Player> rightNeighbor;
 	Science science;
 	Military military;
 	Resource resource;
 	int gold;

 	// prevent generated functions --------------------------------------------
	Player(const Player&);
	Player& operator=(const Player&);
};

#endif /* Player_H */

