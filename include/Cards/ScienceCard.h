#ifndef ScienceCard_H
#define ScienceCard_H

#include <vector>
#include <string>
#include "../cards/Card.h"
#include "../components/Resource.h"

class ScienceCard : public Card {

 public:
	ScienceCard(std::string _name, int age, int _minPlayers);
	ScienceCard(std::string name, int age, int glass, int carpet, int paper, int gold, int minPlayers);
	ScienceCard(std::string name, int age, int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int gold, int minPlayers);
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
