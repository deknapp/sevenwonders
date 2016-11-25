#include "../../include/components/Military.h"

Military::Military() : score(0), strength(0) {}

Military::~Military() {}

int Military::getScore() {

	return score;
}

int Military::getStrength() {

	return strength;
}

void Military::addPoints(int newPoints) {
	score += newPoints;
}

void Military::addStrength(int newStrength) {
	strength += newStrength;
}