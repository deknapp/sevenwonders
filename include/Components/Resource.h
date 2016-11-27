#ifndef Resource_H
#define Resource_H

#include <vector>

class Resource {

 public:
	Resource();
	Resource(int glass, int paper, int carpet);
	Resource(int wood, int brick, int stone, int ore);
	Resource(int wood, int brick, int stone, int ore, int glass, int paper, int carpet);
	~Resource();
	void addCard(int wood, int brick, int stone, int ore, int glass, int paper, int carpet);
	int canBuy(std::shared_ptr<Resource> resourceCost);
	int wood;
 	int brick;
 	int stone;
 	int ore;
 	int glass;
 	int paper;
 	int carpet;

 private: 

 	// prevent generated functions --------------------------------------------
	Resource(const Resource&);
	Resource& operator=(const Resource&);
};

#endif /* Resource_H */

