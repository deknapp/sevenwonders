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

double Military::getValue(int round, int left_strength, int right_strength, double military_weight) {

	int round_value;
	double weighted_strength = military_weight*strength;

	if (round == 0) 
		round_value = 1;
	else if (round == 1)
		round_value = 3;
	else if (round == 2)
		round_value = 5;

	if (weighted_strength > left_strength && weighted_strength > right_strength) 
		return 0;
	if (weighted_strength < left_strength && weighted_strength < right_strength)
		return round_value*2;
	else 
		return round_value;
}
