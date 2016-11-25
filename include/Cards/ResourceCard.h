#ifndef ResourceCard_H
#define ResourceCard_H

#include <string>
#include <vector>

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

 private:
 	int either_or;
 	int gold;
 
 	// prevent generated functions --------------------------------------------
	ResourceCard(const ResourceCard&);
	ResourceCard& operator=(const ResourceCard&);
};

#endif /* ResourceCard_H */
