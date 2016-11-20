#ifndef Economy_H
#define Economy_H

#include <vector>

#include "Card.h"
#include "Economy.h"
#include "Wonder.h"

class Economy {

 public:
	Economy();
	~Economy();
	int operator>(const Economy& b);

 private:

 	int wood;
 	int brick;
 	int stone;
 	int ore;

 	// prevent generated functions --------------------------------------------
	Economy(const Economy&);
	Economy& operator=(const Economy&);
};

#endif /* Economy_H */

