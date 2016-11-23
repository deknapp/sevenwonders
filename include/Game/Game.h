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

 	void getBlueCards(int minPlayers);
 	void getMilitaryCards(int minPlayers);
 	void getResourceCards(int minPlayers);
 	void getScienceCards(int minPlayers);

 	std::shared_ptr<ArgProcessor> args;
 	std::vector<Player> players;
 	std::vector<std::unique_ptr<Card>> firstAgeDeck;
 	std::vector<std::unique_ptr<Card>> secondAgeDeck;
 	std::vector<std::unique_ptr<Card>> thirdAgeDeck;

 	// prevent generated functions --------------------------------------------
	Game(const Game&);
	Game& operator=(const Game&);
};

#endif /* Game_H */

