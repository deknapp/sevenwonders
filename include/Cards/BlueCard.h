#include <vector>
#include <string>

#include "../cards/Card.h"
#include "../components/Resource.h"

class BlueCard : public Card {

 public:
	BlueCard(std::string _name, int age, int points, int minPlayers);
	BlueCard(std::string _name, int brick, int stone, int wood, int ore, int age, int points, int minPlayers);
	BlueCard(std::string _name, int brick, int stone, int wood, int ore, int glass, int carpet, int paper, int age, int points, int minPlayers);
	~BlueCard();

 private:
 	std::string name;
 	std::unique_ptr<Resource> resourceCost;
 	int age;
 	int points;
 	int minPlayers;
 	
 	// prevent generated functions --------------------------------------------
	BlueCard(const BlueCard&);
	BlueCard& operator=(const BlueCard&);
};
