

#ifndef Greedy_H
#define Greedy_H

#include <vector>

#include "Card.h"
#include "Greedy.h"
#include "Wonder.h"

class Greedy {

 public:
	Greedy();
	~Greedy();
	virtual chooseCardToPlay() = 0;

 private:
 	// prevent generated functions --------------------------------------------
	Greedy(const Greedy&);
	Greedy& operator=(const Greedy&);
};

#endif /* Greedy_H */

