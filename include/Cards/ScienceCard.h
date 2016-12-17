#ifndef ScienceCard_H
#define ScienceCard_H

#include <vector>
#include <string>
#include <set>
#include <cstdbool>

#include "../Utility.h"
#include "../cards/Card.h"
#include "../components/Resource.h"

class ScienceCard : public Card {

 public:

 	ScienceCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, std::string _category);

 	ScienceCard(std::string _name, 
						 int glass, int carpet, int paper, std::string buyCardA, std::string buyCardB,
						 int _age, int _minPlayers, std::string _category);

 	ScienceCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers, std::string _category);

 	 ScienceCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, std::string buyCardA, std::string buyCardB, int _age, 
						int _minPlayers, std::string _category);
	~ScienceCard();
	std::string getType();

 private:
 	std::string category;
 	std::set<std::string> buyCards;
 	
 	// prevent generated functions --------------------------------------------
	ScienceCard(const ScienceCard&);
	ScienceCard& operator=(const ScienceCard&);
};

#endif /* ScienceCard_H */
