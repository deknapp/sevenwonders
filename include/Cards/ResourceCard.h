#ifndef ResourceCard_H
#define ResourceCard_H

#include <vector>

class ResourceCard {

 public:
	ResourceCard(std::string _name, int money, std::string _type, int _minPlayers) {}
	ResourceCard(std::string _name, int money, int brick, int stone, int wood, int ore, std::string _type, int _minPlayers) {}
	~ResourceCard();

 private:

 	std::string name;
 	Cost* cost;
 	std::string type;
 	
 	// prevent generated functions --------------------------------------------
	ResourceCard(const ResourceCard&);
	ResourceCard& operator=(const ResourceCard&);
};

#endif /* ResourceCard_H */
