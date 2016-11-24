

#ifndef Greedy_H
#define Greedy_H

#include <vector>
#include "Strategy.h"
#include "../cards/Card.h"

class Greedy : public Strategy {

 public:
	Greedy();
	~Greedy();
	int chooseCardToPlay(std::vector<std::shared_ptr<Card>>);

 private:
 	// prevent generated functions --------------------------------------------
	Greedy(const Greedy&);
	Greedy& operator=(const Greedy&);
};

#endif /* Greedy_H */

