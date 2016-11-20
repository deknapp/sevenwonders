#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>

Card chooseCardToPlay(std::vector<Card> cards) {
	srand (time(NULL));
	index = rand() % cards.length();
	return cards.at(index);
}