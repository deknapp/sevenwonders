#include "../../include/components/Military.h"

Military::Military() : strength(0), score(0) {}

Military::~Military() {}

int Military::getScore() {

	return score;
}

unsigned int Military::getStrength() {

	return strength;
}

void Military::addPoints(int newPoints) {
	score += newPoints;
}

void Military::addStrength(int newStrength) {
	strength += newStrength;
}

double Military::getValue(int round, int left_strength, int right_strength) {

	// TODO
	return 0.0;
}