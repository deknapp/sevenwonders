#ifndef RandomUtility_H
#define RandomUtility_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>

static inline int randomInt(int range) {
	if (range == 0)
		return 0;
	else {
		srand (time(NULL));
		return rand() % range;\
	}
}

template <typename T>
static inline int pop(std::vector<T> cards) {
	T popped = cards.at(cards.size() - 1);
	cards.pop();
	return popped;
}


#endif /* RandomUtility_H */