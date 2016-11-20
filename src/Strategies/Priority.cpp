#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>

Card chooseCardToPlay(std::vector<Card> cards, std::string order) {

	for (const auto& it: order) {

		if (chooseType(cards, it))
			return chooseType(cards, it);
	}

	return NULL;
}

Card chooseType(std::vector<Card> cards, std::string type) {

	for (const auto& it: cards) {
		if (it.type.equals(type))
			return it;
	}

	return NULL:
}