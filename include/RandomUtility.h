#ifndef RandomUtility_H
#define RandomUtility_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>

template <typename T>
static inline T randomCard(std::vector<T> cards) {
	srand (time(NULL));
	int index = rand() % cards.size();
	return cards.at(index);
}

template <typename T>
static inline int randomIndex(std::vector<T> cards) {
	srand (time(NULL));
	int index = rand() % cards.size();
	return index;
}

#endif /* RandomUtility_H */