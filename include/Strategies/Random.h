

#ifndef Random_H
#define Random_H

#include <vector>

#include "../cards/Card.h"
#include "../RandomUtility.h"

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

