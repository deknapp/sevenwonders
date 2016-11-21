#ifndef Game_H
#define Game_H

#include <vector>

#include "Card.h"
#include "Player.h"
#include "Wonder.h"


class Game {

 public:

 	const int NUM_ROUNDS = 3;

	Game(int number_of_players);
	~Game();
	std::shared_ptr<Results> play();
	void setup();
	Results score();


 private:

 	std::vector<Player> players;
 	std::vector<Wonder> wonders;
 	
 	std::vector<Card> firstAgeDeck;
 	std::vector<Card> secondAgeDeck;
 	std::vector<Card> thirdAgeDeck;

 	Results results;

 	// prevent generated functions --------------------------------------------
	Game(const Game&);
	Game& operator=(const Game&);
};

#endif /* Game_H */

