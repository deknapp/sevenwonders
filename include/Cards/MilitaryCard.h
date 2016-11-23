#ifndef MilitaryCard_H
#define MilitaryCard_H

#include <vector>
#include <string> 
#include "../../include/components/Resource.h"

class MilitaryCard {

 public:
	MilitaryCard(std::string _name, int _gold, int _minPlayers);
	MilitaryCard(std::string _name, int brick, int stone, int wood, int ore, int _gold, int _minPlayers);
	~MilitaryCard();

 private:

 	std::string name;
 	std::unique_ptr<Resource> resourceCost;
 	int gold;
 	int minPlayers;
 	
 	// prevent generated functions --------------------------------------------
	MilitaryCard(const MilitaryCard&);
	MilitaryCard& operator=(const MilitaryCard&);
};

#endif /* MilitaryCard_H */
