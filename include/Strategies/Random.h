

#ifndef Random_H
#define Random_H

#include <vector>

#include "Card.h"
#include "RandomUtility.h"
#include "Wonder.h"

class Random : public Strategy {

 public:
	Random();
	~Random();
	Card chooseCardToPlay(std::vector<Card> cards);

 private:
 	// prevent generated functions --------------------------------------------
	Random(const Random&);
	Random& operator=(const Random&);
};

#endif /* Random_H */

