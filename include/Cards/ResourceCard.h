#ifndef ResourceCard_H
#define ResourceCard_H

#include <string>
#include <vector>

#include "../components/Resource.h"

class ResourceCard {

 public:
	ResourceCard(std::string _name, int _gold, int _minPlayers);
	ResourceCard(std::string _name, int brick, int stone, int wood, int ore, int _gold, int _minPlayers);
	~ResourceCard();

 private:

 	std::string name;
 	std::unique_ptr<Resource> resourceCost;
 	int gold;
 	int minPlayers;
 	
 	// prevent generated functions --------------------------------------------
	ResourceCard(const ResourceCard&);
	ResourceCard& operator=(const ResourceCard&);
};

#endif /* ResourceCard_H */
