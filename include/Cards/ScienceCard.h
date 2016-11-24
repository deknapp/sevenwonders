#ifndef ScienceCard_H
#define ScienceCard_H

#include <vector>
#include <string>
#include "../cards/Card.h"
#include "../components/Resource.h"

class ScienceCard : public Card {

 public:
	ScienceCard(std::string _name, std::string type, int age, int gold, int _minPlayers);
	ScienceCard(std::string name, int glass, int carpet, int paper, std::string type, int age, int gold, int minPlayers);
	ScienceCard(std::string name, int wood, int stone, int brick, int ore, int glass, int carpet, int paper, std::string type, int age, int gold, int minPlayers);
	~ScienceCard();
	std::shared_ptr<Resource> getResourceCost();
	void play();

 private:

 	std::string name;
 	std::shared_ptr<Resource> resourceCost;
 	std::string type;
 	int age;
 	int gold;
 	int minPlayers;
 	
 	// prevent generated functions --------------------------------------------
	ScienceCard(const ScienceCard&);
	ScienceCard& operator=(const ScienceCard&);
};

#endif /* ScienceCard_H */
