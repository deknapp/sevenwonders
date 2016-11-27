#ifndef MilitaryCard_H
#define MilitaryCard_H

#include <vector>
#include <string> 
#include <set>
#include <cstdbool>

#include "../Utility.h"
#include "../cards/Card.h"
#include "../../include/components/Resource.h"

class MilitaryCard : public Card {

 public:
	MilitaryCard(std::string _name, int _age, int _minPlayers);

	MilitaryCard(std::string _name, 
						 int wood, int stone, int brick, int ore, 
						 int _age, int _minPlayers);

	MilitaryCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, int _minPlayers);
	~MilitaryCard();
 	int getStrength();

 	bool canBuy(std::set<std::string> playedCards, std::shared_ptr<Resource> resource);

 private:

 	std::set<std::string> buyCards;
 	
 	// prevent generated functions --------------------------------------------
	MilitaryCard(const MilitaryCard&);
	MilitaryCard& operator=(const MilitaryCard&);
};

#endif /* MilitaryCard_H */
