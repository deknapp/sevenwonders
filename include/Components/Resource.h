#ifndef Resource_H
#define Resource_H

#include <vector>
#include <cstdbool>

class Resource {

 public:
	Resource();
	Resource(int glass, int paper, int carpet);
	Resource(int wood, int brick, int stone, int ore);
	Resource(int wood, int brick, int stone, int ore, int glass, int paper, int carpet);
	~Resource();
	std::shared_ptr<Resource> addTo(std::shared_ptr<Resource> otherResource);
	 // order is wood, stone, brick, ore, glass, carpet, paper
 	std::vector<int> resources;
 	int gold;
 	int brownWild;
 	int silverWild;
 	int at(int i);
 	void addTo(int i, int amount);
 	void print();

 private: 

 	int componentCost(int gold, int cost, int inHand, int inNeighborsHand);

 	// prevent generated functions --------------------------------------------
	Resource(const Resource&);
	Resource& operator=(const Resource&);
};

#endif /* Resource_H */

