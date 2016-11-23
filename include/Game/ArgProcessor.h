#include <vector>
#include "../cards/Card.h"
#include "../game/Player.h"

class ArgProcessor {

 public:

	ArgProcessor(int argc, char* argv[]);
	int getNumGames();
	int getNumPlayers();
	std::vector<std::string> getStrategies();

 private:

 	std::vector<std::string> strategies;
 	int numPlayers;
 	int numGames;

 	// prevent generated functions --------------------------------------------
	ArgProcessor(const ArgProcessor&);
	ArgProcessor& operator=(const ArgProcessor&);
};


