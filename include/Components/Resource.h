#ifndef Resource_H
#define Resource_H

#include <vector>

#include "../cards/Card.h"

class Resource {

 public:
	Resource(int wood, int brick, int stone, int ore);
	~Resource();
	int operator>(const Resource& b);

 private:

 	int wood;
 	int brick;
 	int stone;
 	int ore;

 	// prevent generated functions --------------------------------------------
	Resource(const Resource&);
	Resource& operator=(const Resource&);
};

#endif /* Resource_H */

