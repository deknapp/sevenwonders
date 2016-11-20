#ifndef PriorityOrder_H
#define PriorityOrder_H

#include <vector>

#include "Card.h"
#include "PriorityOrder.h"
#include "Wonder.h"

class PriorityOrder {

 public:
	PriorityOrder(std::string PriorityOrder_H);
	~PriorityOrder();
	chooseCardToPlay();

 private:

 	std::string order;

 	// prevent generated functions --------------------------------------------
	PriorityOrder(const PriorityOrder&);
	PriorityOrder& operator=(const PriorityOrder&);
};

#endif /* PriorityOrder_H */

                                                               