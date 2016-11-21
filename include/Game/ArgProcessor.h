#ifndef ArgProcessor_H
#define ArgProcessor_H

#include <vector>

#include "Card.h"
#include "Player.h"
#include "Wonder.h"

class ArgProcessor {

 public:

	ArgProcessor(int argc, char* argv[]);
	int getNumGames();
	int getNumPlayers();
	std::vector<Strategy> getStrategies();

 private:

 	std::vector<std::string> strategies;
 	int numPlayers;
 	int numGames;

 	// prevent generated functions --------------------------------------------
	ArgProcessor(const ArgProcessor&);
	ArgProcessor& operator=(const ArgProcessor&);
};

#endif /* ArgProcessor_H */

