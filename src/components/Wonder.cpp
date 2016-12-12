#include "../../include/components/Wonder.h"

Wonder::Wonder(std::string _name, int wood, int stone, int brick, int ore) : name(_name), resource(std::shared_ptr<Resource>(new Resource(wood, stone, brick, ore))) {}

Wonder::Wonder(std::string _name, int glass, int carpet, int paper) : name(_name), resource(std::shared_ptr<Resource>(new Resource(glass, carpet, paper))) {}



Wonder::~Wonder() {}

std::string Wonder::getName() {
	return name;
}

std::shared_ptr<Resource> Wonder::getCost(int i) {
	return resourceCost.at(i);
} 

std::shared_ptr<Resource> Wonder::getFreeResource() {
	return resource;
} 