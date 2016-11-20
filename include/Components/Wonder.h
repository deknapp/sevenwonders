#ifndef Wonder_H
#define Wonder_H

#include <vector>
#include "Card.h"

class Wonder {

 public:
	Wonder();
	~Wonder();

 private:

 	std::vector<Card> WonderCards;
 	Card freeCard;

 	// prevent generated functions --------------------------------------------
	Wonder(const Wonder&);
	Wonder& operator=(const Wonder&);
};

#endif /* Wonder_H */

