#ifndef ScienceCard_H
#define ScienceCard_H

#include <vector>
#include <string>
#include "../components/Resource.h"

class ScienceCard {

 public:
	ScienceCard(std::string _name, int _minPlayers);
	ScienceCard(std::string name, int glass, int carpet, int paper, int gold, int minPlayers);
	ScienceCard(std::string name, int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int gold, int minPlayers);
	~ScienceCard();

 private:

 	std::string name;
 	std::unique_ptr<Resource> resourceCost;
 	int gold;
 	int minPlayers;
 	
 	// prevent generated functions --------------------------------------------
	ScienceCard(const ScienceCard&);
	ScienceCard& operator=(const ScienceCard&);
};

#endif /* ScienceCard_H */
