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
	int operator>(const Resource& b);

 private:

 	int wood;
 	int brick;
 	int stone;
 	int ore;
 	int glass;
 	int paper;
 	int carpet;

 	// prevent generated functions --------------------------------------------
	Resource(const Resource&);
	Resource& operator=(const Resource&);
};

#endif /* Resource_H */

