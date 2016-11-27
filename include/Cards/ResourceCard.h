#ifndef ResourceCard_H
#define ResourceCard_H

#include <string>
#include <vector>
#include <set>
#include <cstdbool>

#include "../Utility.h"
#include "../cards/Card.h"
#include "../components/Resource.h"

class ResourceCard : public Card {

 public:
	ResourceCard(std::string _name, int _age, int _minPlayers, int _gold);
	ResourceCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _gold);

	ResourceCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _gold, int _either_or);

	ResourceCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _gold);
	~ResourceCard();

	int getResourceGoldCost();

	bool canPurchase(int buyGold, std::set<std::string> playedCards);

	 int gold;

 private:
 	int either_or;

 
 	// prevent generated functions --------------------------------------------
	ResourceCard(const ResourceCard&);
	ResourceCard& operator=(const ResourceCard&);
};

#endif /* ResourceCard_H */
