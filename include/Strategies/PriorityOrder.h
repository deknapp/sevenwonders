#ifndef PriorityOrder_H
#define PriorityOrder_H

#include <vector>
#include "../cards/Card.h"

class PriorityOrder {

 public:
	PriorityOrder();
	~PriorityOrder();
	std::shared_ptr<Card> chooseCardToPlay(std::vector<std::shared_ptr<Card>>);

 private:

 	std::string order;
 	// prevent generated functions --------------------------------------------
	PriorityOrder(const PriorityOrder&);
	PriorityOrder& operator=(const PriorityOrder&);
};

#endif /* PriorityOrder_H */

                                                               