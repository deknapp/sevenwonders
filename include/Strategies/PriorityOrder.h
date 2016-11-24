#ifndef PriorityOrder_H
#define PriorityOrder_H

#include <vector>
#include "Strategy.h"
#include "../cards/Card.h"

class PriorityOrder : public Strategy {

 public:
	PriorityOrder(std::string type);
	~PriorityOrder();
	int chooseCardToPlay(std::vector<std::shared_ptr<Card>>);
	int chooseType(std::vector<std::shared_ptr<Card>> cards, std::string type);

 private:

 	std::vector<std::string> order;
 	// prevent generated functions --------------------------------------------
	PriorityOrder(const PriorityOrder&);
	PriorityOrder& operator=(const PriorityOrder&);
};

#endif /* PriorityOrder_H */

                                                               