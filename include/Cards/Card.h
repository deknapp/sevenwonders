#ifndef Card_H
#define Card_H

#include <vector>
#include <string>
#include <set>

#include "../components/Resource.h"

class Card {

 public:
 	Card(std::string _type, std::string _name,  int _age, int _minPlayers);
 	Card(std::string _type, std::string _name, int glass, int paper, int carpet, int _age, int _minPlayers);
 	Card(std::string _type, std::string _name, int wood, int stone, int brick, int ore, int _age, int _minPlayers);
 	Card(std::string _type, std::string _name, int wood, int stone, int brick, int ore, int glass, int paper, int carpet, int _age, int _minPlayers);
	virtual ~Card();
	
	std::shared_ptr<Resource> getResourceCost();
	std::string getType();
	std::string getName();
	int getAge();
	int getGoldCost();
	int minPlayers;

 protected:

 	std::string type;
 	std::string name;
 	std::shared_ptr<Resource> resourceCost;
 	std::set<std::string> buyCards;
 	int age;
 

 private:
 	
 	// prevent generated functions --------------------------------------------
	Card(const Card&);
	Card& operator=(const Card&);
};

#endif /* Card_H */

