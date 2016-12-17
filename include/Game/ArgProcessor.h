#ifndef ArgProcessor_H
#define ArgProcessor_H

#include <vector>
#include <string>

#include "../cards/Card.h"
#include "../game/Player.h"


class ArgProcessor {

 public:

	ArgProcessor(int argc, char* argv[]);
	int getNumGames();
	int getNumPlayers();
	double getResourceConstant();
	double getResourceWeight();
	std::string wonderSide;

 private:

 	double resourceWeight;
 	double resourceConstant;

 	int numPlayers;
 	int numGames;

 	// prevent generated functions --------------------------------------------
	ArgProcessor(const ArgProcessor&);
	ArgProcessor& operator=(const ArgProcessor&);
};


#endif /* ArgProcessor_H */