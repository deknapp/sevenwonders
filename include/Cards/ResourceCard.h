#ifndef ResourceCard_H
#define ResourceCard_H

#include <string>
#include <vector>

#include "../cards/Card.h"
#include "../components/Resource.h"

class ResourceCard : public Card {

 public:
	ResourceCard(std::string _name, int age, int _gold, int _minPlayers);
	ResourceCard(std::string _name, int age, int wood, int stone, int brick, int ore, int _gold, int _minPlayers);
	ResourceCard(std::string _name, int age, int _gold, int brick, int stone, int wood, int ore, int either_or, int _minPlayers);
	std::shared_ptr<Resource> getResourceCost();
	~ResourceCard();
	void play();

 private:

 	std::string name;
 	int age;
 	std::shared_ptr<Resource> resourceCost;
 	int gold;
 	int either_or;
 	int minPlayers;
 
 	
 	// prevent generated functions --------------------------------------------
	ResourceCard(const ResourceCard&);
	ResourceCard& operator=(const ResourceCard&);
};

#endif /* ResourceCard_H */
