#include "../../include/strategies/StrategyFactory.h"

std::shared_ptr<Strategy> getStrategy(std::string type) {


	if (type.equals("R"))
		return std::shared_ptr<Random>(new Random());
	if (type.equals("G"))
		return std::shared_ptr<Greedy>(new Greedy());
	else
		return std::shared_ptr<Priority>(new Priority(type));
}