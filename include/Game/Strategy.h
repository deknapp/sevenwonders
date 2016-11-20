

#ifndef Strategy_H
#define Strategy_H

#include <vector>

#include "Card.h"
#include "Strategy.h"
#include "Wonder.h"

class Strategy {

 public:
	Strategy();
	~Strategy();
	virtual chooseCardToPlay() = 0;

 private:
 	// prevent generated functions --------------------------------------------
	Strategy(const Strategy&);
	Strategy& operator=(const Strategy&);
};

#endif /* Strategy_H */

