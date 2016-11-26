#ifndef Game_H
#define Game_H

#include <vector>

#include "../cards/Card.h"
#include "ArgProcessor.h"
#include "Player.h"

class Game {

 public:

 	const int NUM_ROUNDS = 3;

	Game(std::shared_ptr<ArgProcessor> args_pointer);
	~Game();

	void play();
	void setup();
	void score();

 private:

 	void dealRound(int rund);
 	void getBlueCards();
 	void getMilitaryCards();
 	void getResourceCards();
 	void getScienceCards();
 	void getDeck();
 	void initPlayers();
 	int minPlayers;
 	int numCards;
 	std::shared_ptr<Player> playerAt(int i);

 	std::shared_ptr<ArgProcessor> args;
 	std::vector<std::shared_ptr<Player>> players;
 	std::shared_ptr<Deck> firstAgeDeck;
 	std::shared_ptr<Deck>  secondAgeDeck;
 	std::shared_ptr<Deck>  thirdAgeDeck;

 	// prevent generated functions --------------------------------------------
	Game(const Game&);
	Game& operator=(const Game&);
};

#endif /* Game_H */

