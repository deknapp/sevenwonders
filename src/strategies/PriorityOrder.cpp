#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>
#include "../../include/strategies/PriorityOrder.h"

std::shared_ptr<Card> PriorityOrder::chooseCardToPlay(std::vector<std::shared_ptr<Card>> cards) {

	for (const auto& it: order) {

		if (chooseType(cards, it))
			return chooseType(cards, it);
	}

	return NULL;
}

std::shared_ptr<Card> PriorityOrder::chooseType(std::vector<Card> cards, std::string type) {

	for (const auto& it: cards) {
		if (it.type.equals(type))
			return it;
	}

	return NULL:
}