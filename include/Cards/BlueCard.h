#include <vector>
#include <string>
#include "../components/Resource.h"

class BlueCard {

 public:
	BlueCard(std::string _name, int money);
	BlueCard(std::string _name, int money, int brick, int stone, int wood, int ore);
	~BlueCard();

 private:

 	std::string name;
 	Resource cost;
 	
 	// prevent generated functions --------------------------------------------
	BlueCard(const BlueCard&);
	BlueCard& operator=(const BlueCard&);
};
