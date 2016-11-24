#ifndef MilitaryCard_H
#define MilitaryCard_H

#include <vector>
#include <string> 
#include "../cards/Card.h"
#include "../../include/components/Resource.h"

class MilitaryCard : public Card {

 public:
	MilitaryCard(std::string _name, int _gold, int _age, int _minPlayers);
	MilitaryCard(std::string _name, int brick, int stone, int wood, int ore, int _gold, int _age, int _minPlayers);
	MilitaryCard(std::string _name, int brick, int stone, int wood, int ore, int glass, int carpet, int paper, int _gold, int _age, int _minPlayers);
	~MilitaryCard();
 	std::shared_ptr<Resource> getResourceCost();
 	void play();

 private:

 	std::string name;
 	std::shared_ptr<Resource> resourceCost;
 	int gold;
 	int age;
 	int minPlayers;
 	
 	// prevent generated functions --------------------------------------------
	MilitaryCard(const MilitaryCard&);
	MilitaryCard& operator=(const MilitaryCard&);
};

#endif /* MilitaryCard_H */
