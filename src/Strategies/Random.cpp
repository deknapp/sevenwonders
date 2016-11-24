#include "../../include/strategies/Random.h"

Random::Random() {}

int Random::chooseCardToPlay(std::vector<std::shared_ptr<Card>> cards) {
	return randomIndex(cards);
}