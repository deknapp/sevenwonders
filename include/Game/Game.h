#ifndef Game_H
#define Game_H

#include <vector>
#include "ArgProcessor.h"
#include "Player.h"
#include "../components/Wonder.h"

class Game {

 public:

 	const int NUM_ROUNDS = 3;
 	const int NUM_CARDS = 7;

	Game(std::shared_ptr<ArgProcessor> args_pointer);
	~Game();

	void play();
	void setup();
	void score();

 private:

 	void dealRound(int rund);
 	void getWonderCards();
 	void getBlueCards();
 	void getWonders();
 	void getMilitaryCards();
 	void getResourceCards();
 	void getScienceCards();
 	void getGuildCards();
 	void getEconomyCards();
 	void getDeck();
 	void initPlayers();
 	void initWonder(std::string name);
 	int numPlayers;
 	std::shared_ptr<Player> playerAt(int i);

 	std::shared_ptr<ArgProcessor> args;
 	std::vector<std::shared_ptr<Wonder> > wonders;
 	std::vector<std::shared_ptr<Player> > players;
 	std::vector<std::shared_ptr<Deck> > decks;

 	// prevent generated functions --------------------------------------------
	Game(const Game&);
	Game& operator=(const Game&);
};

#endif /* Game_H */

