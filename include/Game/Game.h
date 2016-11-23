#ifndef Game_H
#define Game_H

#include <vector>

#include "../cards/Card.h"
#include "Player.h"

class Game {

 public:

 	const int NUM_ROUNDS = 3;

	Game(std::unique_ptr<ArgProcessor> args_pointer);
	~Game();
	void play();
	void setup();
	void score();


 private:

 	std::unique_ptr<ArgProcessor> args;
 	std::vector<Player> players;
 	std::vector<Card> firstAgeDeck;
 	std::vector<Card> secondAgeDeck;
 	std::vector<Card> thirdAgeDeck;

 	// prevent generated functions --------------------------------------------
	Game(const Game&);
	Game& operator=(const Game&);
};

#endif /* Game_H */

