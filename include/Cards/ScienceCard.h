#ifndef ScienceCard_H
#define ScienceCard_H

#include <vector>

class ScienceCard {

 public:
	ScienceCard();
	ScienceCard(std::string name, int glass, int carpet, int paper, std::string type, int age, int minPlayers);
	ScienceCard(std::string name, int wood, int stone, int brick, int ore, int glass, int carpet, int paper, std::string type, int age, int minPlayers);
	~ScienceCard();

 private:

 	std::string name;
 	std::string type;
 	Resource cost;
 	
 	// prevent generated functions --------------------------------------------
	ScienceCard(const ScienceCard&);
	ScienceCard& operator=(const ScienceCard&);
};

#endif /* ScienceCard_H */
