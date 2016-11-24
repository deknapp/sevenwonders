#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>
#include "../../include/strategies/PriorityOrder.h"

PriorityOrder::PriorityOrder(std::string type) {

	for (int i=0; i<3; i++) {
		order.push_back(type);
	}
}

int PriorityOrder::chooseType(std::vector<std::shared_ptr<Card>> cards, std::string type) {


	for (int i = 0; i < cards.size(); i++) {
		if (cards.at(i)->getType().compare(type))
			return i;
	}

	return 0;
}

int PriorityOrder::chooseCardToPlay(std::vector<std::shared_ptr<Card>> cards) {

	for (const auto& it: order) {

		if (chooseType(cards, it))
			return chooseType(cards, it);
	}

	return 0;
}

