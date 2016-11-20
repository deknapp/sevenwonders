

#ifndef Random_H
#define Random_H

#include <vector>

#include "Card.h"
#include "Random.h"
#include "Wonder.h"

class Random {

 public:
	Random();
	~Random();
	virtual chooseCardToPlay() = 0;

 private:
 	// prevent generated functions --------------------------------------------
	Random(const Random&);
	Random& operator=(const Random&);
};

#endif /* Random_H */

