#ifndef Game_H
#define Game_H

#include <vector>
#include <string>
#include <map>
#include "ArgProcessor.h"
#include "Player.h"
#include "../components/Wonder.h"
#include "../results/Score.h"

class Game {

 public:

 	const int NUM_ROUNDS = 3;
 	const int NUM_CARDS = 7;

	Game(std::shared_ptr<ArgProcessor> args_pointer);
	~Game();

	std::shared_ptr<Score> play();
	void setup();

 private:

 	void printScore();
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
 	int numPlayers;
 	std::shared_ptr<Player> playerAt(int i);
 	void dealWonders();

 	std::shared_ptr<ArgProcessor> args;
 	std::vector<std::shared_ptr<Wonder> > wonders;
 	std::vector<std::shared_ptr<Player> > players;
 	std::vector<std::shared_ptr<Deck> > decks;

 	// prevent generated functions --------------------------------------------
	Game(const Game&);
	Game& operator=(const Game&);
};

#endif /* Game_H */

