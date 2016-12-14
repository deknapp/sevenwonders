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

void Science::addCard(std::string type) {
	if (type == "wild")
		wild += 1;
	if (type == "A")
		abacus += 1;
	if (type == "wheel")
		wheels += 1;
	if (type == "tablet")
		tablet += 1;
}