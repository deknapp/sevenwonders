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

int Resource::at(int i) {
	return resources.at(i);
}

void Resource::addTo(int i, int amount) {
 	resources.at(i) += amount;
}



























