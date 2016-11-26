#ifndef RandomUtility_H
#define RandomUtility_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>

static inline int randomInt(int range) {
	srand (time(NULL));
	int index = rand() % range;
	return index;
}

template <typename T>
static inline int pop(std::vector<T> cards) {
	T popped = cards.at(cards.size() - 1);
	cards.pop();
	return popped;
}


#endif /* RandomUtility_H */