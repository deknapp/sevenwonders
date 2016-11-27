#include "../../include/components/Resource.h"
#include <iostream>

Resource::Resource() : gold(3) {

	for (int i=0; i < 7; i++) {
		resources.push_back(0);
	}
}

Resource::Resource(int _glass, int _paper, int _carpet) : gold(3) {

	for (int i=0; i < 4; i++) {
		resources.push_back(0);
	}
	resources.push_back(_glass);
	resources.push_back(_paper);
	resources.push_back(_carpet);
}

Resource::Resource(int _wood, int _brick, int _stone, int _ore) : gold(3){

	resources.push_back(_wood);
	resources.push_back(_brick);
	resources.push_back(_stone);
	resources.push_back(_ore);

	for (int i=0; i < 3; i++) {
		resources.push_back(0);
	}
}

Resource::Resource(int _wood, int _brick, int _stone, int _ore, int _glass, int _paper, int _carpet) : gold(3){

	resources.push_back(_wood);
	resources.push_back(_brick);
	resources.push_back(_stone);
	resources.push_back(_ore);
	resources.push_back(_glass);
	resources.push_back(_paper);
	resources.push_back(_carpet);
}

Resource::~Resource() {}

std::shared_ptr<Resource> Resource::addTo(std::shared_ptr<Resource> otherResource) {

	std::shared_ptr<Resource> sum(new Resource());

	for (int i=0; i<7; i++) {
		sum->addTo(i, resources.at(i) + otherResource->at(i));
	}

	sum->gold = gold + otherResource->gold;
	return sum;
}

// returns -1 if component is unaffordable, returns the cost otherwise
int Resource::componentCost(int gold, int cost, int inHand, int inNeighborsHand) {

	int numberToBuy = cost - inHand;
	if (gold < numberToBuy*2) 
		return -1;
	else 
		return numberToBuy*2;
}

int Resource::at(int i) {
	return resources.at(i);
}

void Resource::addTo(int i, int amount) {
 	resources.at(i) += amount;
}

int Resource::canBuy(std::shared_ptr<Resource> resourceCost, std::shared_ptr<Resource> resourcesToTradeFor) {

	int goldStillThere = gold;
	int cost = 0;
	bool traded = false;

	for (int i=0; i < 7; i++) {

		cost = componentCost(goldStillThere, resourceCost->at(i), resources.at(i), resourcesToTradeFor->at(i));
		if (cost < 0)
			return -1;
		else {
			if (cost > 0)
				traded = true;
			goldStillThere -= cost*2;
			resourcesToTradeFor->addTo(i, -1*cost);
		}
	}
		
	if (traded) {
		std::cout << "SUCCESSFULLY TRADED" << std::endl;
	}

	return (gold - goldStillThere);	
}

























