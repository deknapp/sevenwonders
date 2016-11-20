#ifndef Wonder_H
#define Wonder_H

#include <vector>

#include "Card.h"
#include "Wonder.h"
#include "Wonder.h"

class Wonder {

 public:
	Wonder();
	~Wonder();
	init(Wonder wonder);

 private:

 	std::vector<Card> deck;
 	std::set<Card> playedCards;
 	
 	Card disCard;
 	Card newCard;
 	Wonder leftNeighbor;
 	Wonder rightNeighbor;
 	Wonder wonder;
 	int cash;

 	// prevent generated functions --------------------------------------------
	Wonder(const Wonder&);
	Wonder& operator=(const Wonder&);
};

#endif /* Wonder_H */

