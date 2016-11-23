#ifndef Game_H
#define Game_H

#include <vector>

#include "../cards/Card.h"
#include "Player.h"

class Game {

 public:

 	const int NUM_ROUNDS = 3;

	Game(int number_of_players);
	~Game();
	void play();
	void setup();
	void score();


 private:

 	std::vector<Player> players;
 	std::vector<Card> firstAgeDeck;
 	std::vector<Card> secondAgeDeck;
 	std::vector<Card> thirdAgeDeck;

 	// prevent generated functions --------------------------------------------
	Game(const Game&);
	Game& operator=(const Game&);
};

#endif /* Game_H */

