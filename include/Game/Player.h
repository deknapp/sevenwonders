#ifndef Player_H
#define Player_H

#include <vector>
#include <string>
#include <cstdbool>

#include "Deck.h"
#include "../cards/Card.h"
#include "../cards/BlueCard.h"
#include "../cards/GuildCard.h"
#include "../cards/MilitaryCard.h"
#include "../cards/ResourceCard.h"
#include "../cards/ScienceCard.h"

#include "../components/Military.h"
#include "../components/Science.h"
#include "../components/Resource.h"
#include "../components/Wonder.h"

#include "../Utility.h"

class Player {

 public:
	Player(int name);
	~Player();
	int canAfford(std::shared_ptr<Card> card);
	void playTurn(int round);
	void updateMilitaryPoints();
	void addRandomCardToHand(std::shared_ptr<Deck> newHand, int rund);
	int strength();
	void setLeft(std::shared_ptr<Player> leftNeighbor);
	void setRight(std::shared_ptr<Player> rightNeighbor);
	void setStrategy(std::string strategy);
	int score();
	void discard();
	void getNewHand(std::shared_ptr<Deck> hand);
	void updateMilitaryPoints(int round);
	void endRound(int round);
	void printScore();
	void print();
	void getAffordableCards();

	void getAvailableResources();
	std::shared_ptr<Resource> getResource();

	std::string getStrategy();

	void setWonder(std::shared_ptr<Wonder> dealtWonder);
	
	int numMilitaryCardsPlayed;
	int numScienceCardsPlayed;
	int numGuildCardsPlayed;
	int numEconomyCardsPlayed;
	int numBlueCardsPlayed;
	int numBrownCardsPlayed;
	int numSilverCardsPlayed;
	int numWondersPlayed;
	int numMinusOnes;

 private:

 	void play();
 	void playRandomCard(int depth);
 	int playGreedy();
 	void playNeighborGuildCard();

 	void playDistribution();
 	int playEconomyCard();
 	int playMilitaryCard();
 	int playScienceCard();
 	int playResourceCard();
 	int playBlueCard();
 	int playGuildCard();
 	int playGuilds();
 	void playEconomy(std::string name);
 	void scoreGuild(std::string name);
 	void scoreEconomy(std::string name);
 	int playFight();
 	void buy(std::shared_ptr<Resource> resourceCost);
 	bool canAfford(std::shared_ptr<Resource> resourceCost);
 	bool canPlay(std::string name, std::shared_ptr<Resource> resourceCost);
 	int componentCost(int gold, int cost, int i);
 	int componentCost(std::string side, int gold, int cost, int i);


 	std::set<std::string> playedCards;
 	std::set<std::string> playedEconomyCards;
 	std::set<std::string> playedGuilds;
 	std::set<std::string> chainCards;

 	std::string name;
 	std::shared_ptr<Deck> hand;
 	
 	std::shared_ptr<Player> leftNeighbor;
 	std::shared_ptr<Player> rightNeighbor;

 	std::string strategy;

 	Science science;
 	Military military;
 	std::shared_ptr<Resource> resource;
 	std::shared_ptr<Wonder> wonder;

 	int bluePoints;
 	int guildPoints;
 	int economyPoints;
 	int wonderPoints;

 	int leftCost;
 	int rightCost;
 	int silverCost;

 	bool playTwoLastRound;
 	bool canAffordNextWonder();
 	int playWonder(std::string side);

 	// prevent generated functions --------------------------------------------
	Player(const Player&);
	Player& operator=(const Player&);
};

#endif /* Player_H */

