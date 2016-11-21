#ifndef Military_H
#define Military_H

#include <vector>

#include "Card.h"
#include "Military.h"
#include "Wonder.h"

class Military {

 public:
	Military();
	~Military();
	int score();
	int strength();

 private:

 	int score;
 	int strength;

 	// prevent generated functions --------------------------------------------
	Military(const Military&);
	Military& operator=(const Military&);
};

#endif /* Military_H */

