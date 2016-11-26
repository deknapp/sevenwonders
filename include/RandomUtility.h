#ifndef RandomUtility_H
#define RandomUtility_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>

static inline int randomInt(int range) {
	if (range == 0)
		return 0;
	else {
		return rand() % range;\
	}
}

#endif /* RandomUtility_H */