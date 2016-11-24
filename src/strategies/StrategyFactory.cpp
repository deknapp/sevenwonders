#include "../../include/strategies/StrategyFactory.h"

StrategyFactory::StrategyFactory() {}

Strategy* StrategyFactory::getStrategy(std::string type) {


	if (type.compare("R"))
		return new Random();
	if (type.compare("G"))
		return new Greedy();
	else
		return new PriorityOrder(type);
}