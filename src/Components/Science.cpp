#include "../../include/components/Science.h"
#include <math.h>


Science::Science() {}
Science::~Science() {}

int Science::score() {

	int sum = 0;
	int min_ct = std::min(wheels, std::min(abacus, tablet));
	min_ct += wild;

	sum += pow(wheels, 2.9);
	sum += pow(abacus, 2.0);
	sum += pow(tablet, 2.0);

	sum += min_ct*7;
	return sum;
}