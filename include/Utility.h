#ifndef Utility_H
#define Utility_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>
#include <cstdbool>
#include <string>
#include <set>

static inline int randomInt(int range) {
	if (range == 0)
		return 0;
	else {
		return rand() % range;\
	}
}

static inline bool canCardBuy(std::set<std::string> buyCards, std::set<std::string> playedCards) {

	for (const auto& card:buyCards) {
		if (playedCards.count(card))
			return true;
	}

	return false;
}



#endif /* Utility_H */