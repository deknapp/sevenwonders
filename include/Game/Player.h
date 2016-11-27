#ifndef Player_H
#define Player_H

#include <vector>
#include <string>

#include "Deck.h"
#include "../cards/Card.h"
#include "../cards/BlueCard.h"
#include "../cards/MilitaryCard.h"
#include "../cards/ResourceCard.h"
#include "../cards/ScienceCard.h"

#include "../components/Military.h"
#include "../components/Science.h"
#include "../components/Resource.h"

#include "../Utility.h"

class Player {

 public:
	Player(int name);
	~Player();
	int canAfford(std::shared_ptr<Card> card);
	void playTurn(int round);
	void updateMilitaryPoints();
	void addRandomCardToHand(std::shared_ptr<Deck> newHand);
	int strength();
	void setLeft(std::shared_ptr<Player> leftNeighbor);
	void setRight(std::shared_ptr<Player> rightNeighbor);
	void initStrategies(std::vector<std::string> strategies);
	int score();
	void discard();
	void getNewHand(std::shared_ptr<Deck> hand);
	void updateMilitaryPoints(int round);
	void endRound(int round);
	void printScore();
	void print();
	void play(std::string type);
	void getAvailableResources();
	std::shared_ptr<Resource> getResource();

 private:


 	void play();
 	void playRandomCard();
 	void playMilitaryCard();
 	void playScienceCard();
 	void playResourceCard();
 	void playBlueCard();

 	std::set<std::string> playedCards;

 	std::string name;
 	std::shared_ptr<Deck> hand;
 	std::shared_ptr<Deck> affordableHand;

 	
 	std::shared_ptr<Player> leftNeighbor;
 	std::shared_ptr<Player> rightNeighbor;

 	std::vector<std::string> strategies;

 	Science science;
 	Military military;
 	std::shared_ptr<Resource> resource;
 	std::shared_ptr<Resource> resourcesToTradeFor;
 	int bluePoints;

 	// prevent generated functions --------------------------------------------
	Player(const Player&);
	Player& operator=(const Player&);
};

#endif /* Player_H */

