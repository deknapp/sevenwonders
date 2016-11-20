#ifndef Resource_H
#define Resource_H

#include <vector>

#include "Card.h"
#include "Resource.h"
#include "Wonder.h"

class Resource {

 public:
	Resource();
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

