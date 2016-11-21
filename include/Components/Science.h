#ifndef Science_H
#define Science_H

#include <vector>

#include "Card.h"
#include "Science.h"
#include "Wonder.h"

class Science {

 public:
	Science();
	~Science();
	int score();

 private:

 	int wheels;
 	int abacus;
 	int tablet;
 	int wild;

 	// prevent generated functions --------------------------------------------
	Science(const Science&);
	Science& operator=(const Science&);
};

#endif /* Science_H */

