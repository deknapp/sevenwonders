#include "../../include/cards/Card.h"

Card::Card() {}
Card::~Card() {}

void Card::play() {}

std::shared_ptr<Resource> Card::getResourceCost() {
	return NULL;
}

std::string Card::getType() {
	return type;
}

int Card::getGoldCost() {
	return gold;
}