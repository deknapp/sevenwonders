#include "../../include/cards/Card.h"
#include "../../include/cards/ResourceCard.h"

Card::Card(std::string _type, std::string _name, int _age, int _minPlayers) :
		   type(_type), name(_name), resourceCost(std::shared_ptr<Resource>(new Resource())), age(_age), minPlayers(_minPlayers) {}

Card::Card(std::string _type, std::string _name, int wood, int stone, int brick, int ore, int _age, int _minPlayers) :	 
		  type(_type), name(_name), resourceCost(std::shared_ptr<Resource>(new Resource(wood, stone, brick, ore))), age(_age), minPlayers(_minPlayers) {}  

Card::Card(std::string _type, std::string _name, int glass, int paper, int carpet, int _age, int _minPlayers) :	 
		  type(_type), name(_name), resourceCost(std::shared_ptr<Resource>(new Resource(glass, paper, carpet))), age(_age), minPlayers(_minPlayers) {}  

Card::Card(std::string _type, std::string _name, int wood, int stone, int brick, int ore, int glass, int paper, int carpet, int _age, int _minPlayers) :	 
		  type(_type), name(_name), resourceCost(std::shared_ptr<Resource>(new Resource(wood, stone, brick, ore, glass, paper, carpet))), age(_age), minPlayers(_minPlayers) {}  

Card::~Card() {}

std::shared_ptr<Resource> Card::getResourceCost() {
	return resourceCost;
}

std::string Card::getType() {
	return type;
}

std::string Card::getName() {
	return name;
}

int Card::getGoldCost() {
	return 0;
}

int Card::getAge() {
	return age;
}