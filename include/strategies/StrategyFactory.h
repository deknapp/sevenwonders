#ifndef StrategyFactory_H
#define StrategyFactory_H

#include <string>
#include "Strategy.h"
#include "Random.h"
#include "Greedy.h"
#include "PriorityOrder.h"

class StrategyFactory {

 public:

	StrategyFactory();
	~StrategyFactory();

	std::shared_ptr<Strategy> getStrategy(std::string type);

 private:

 	// prevent generated functions --------------------------------------------
	StrategyFactory(const StrategyFactory&);
	StrategyFactory& operator=(const StrategyFactory&);
};

#endif /* StrategyFactory_H */

