#ifndef ScienceCard_H
#define ScienceCard_H

#include <vector>
#include <string>
#include "../cards/Card.h"
#include "../components/Resource.h"

class ScienceCard : public Card {

 public:

 	ScienceCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, std::string _category);
 	ScienceCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers, std::string _category) ;
	~ScienceCard();
	std::string getCategory();

 private:
 	std::string category;
 	
 	// prevent generated functions --------------------------------------------
	ScienceCard(const ScienceCard&);
	ScienceCard& operator=(const ScienceCard&);
};

#endif /* ScienceCard_H */
