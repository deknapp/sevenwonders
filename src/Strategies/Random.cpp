#include "../../include/strategies/Random.h"

int chooseCardToPlay(std::vector<std::shared_ptr<Card>> cards) {
	return randomIndex(cards);
}