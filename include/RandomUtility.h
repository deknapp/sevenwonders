
#include "Card.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>

static inline Card randomCard(std::vector<Card> cards) {
	srand (time(NULL));
	index = rand() % cards.length();
	return cards.at(index);
}

static inline int randomIndex(std::vector<Card> cards) {
	srand (time(NULL));
	index = rand() % cards.length();
	return index;
}