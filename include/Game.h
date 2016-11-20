#ifndef Game_H
#define Game_H

#include <vector>

#include "Card.h"
#include "Player.h"
#include "Wonder.h"


class Game {

 public:
	Game(int number_of_players);
	~Game();
	play();
	score();

 private:

 	std::vector<Player> players;
 	std::vector<Wonder> wonders;
 	std::vector<Card> deck;

 	// prevent generated functions --------------------------------------------
	Game(const Game&);
	Game& operator=(const Game&);
};

#endif /* Game_H */

