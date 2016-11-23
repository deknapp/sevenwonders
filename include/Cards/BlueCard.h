#include <vector>
#include <string>
#include "../components/Resource.h"

class BlueCard {

 public:
	BlueCard(std::string _name, int minPlayers);
	BlueCard(std::string _name, int brick, int stone, int wood, int ore, int minPlayers);
	~BlueCard();

 private:

 	std::string name;
 	std::unique_ptr<Resource> resourceCost;
 	int minPlayers;
 	
 	// prevent generated functions --------------------------------------------
	BlueCard(const BlueCard&);
	BlueCard& operator=(const BlueCard&);
};
