

#ifndef Greedy_H
#define Greedy_H

#include <vector>
#include "../cards/Card.h"

class Greedy {

 public:
	Greedy();
	~Greedy();
	std::shared_ptr<Card> chooseCardToPlay(std::vector<std::shared_ptr<Card>>);

 private:
 	// prevent generated functions --------------------------------------------
	Greedy(const Greedy&);
	Greedy& operator=(const Greedy&);
};

#endif /* Greedy_H */

