#include "../../include/components/Science.h"
#include <math.h>
#include <string>


Science::Science() : wild(0), wheels(0), abacus(0), tablet(0) {}
Science::~Science() {}

unsigned int Science::score() {

	unsigned int sum = 0;
	unsigned int min_ct = std::min(wheels, std::min(abacus, tablet));
	min_ct += wild;

	sum += pow(wheels, 2.0);
	sum += pow(abacus, 2.0);
	sum += pow(tablet, 2.0);

	sum += min_ct*7;
	return sum;
}

void Science::addCard(std::string type, int amount) {

	if (type == "wild")
		wild += amount;
	if (type == "A")
		abacus += amount;
	if (type == "wheel")
		wheels += amount;
	if (type == "tablet")
		tablet += amount;
}

double Science::getValue(std::string type, int round, double weight) {

	int scoreWithoutCard = score();
	addCard(type, 1);
	int scoreWithCard = score();
	addCard(type, -1);
	double difference = scoreWithCard - scoreWithoutCard;
	return weight*difference;
}