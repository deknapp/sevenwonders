#include "../../include/cards/MilitaryCard.h"

#include <string> 

MilitaryCard::MilitaryCard(std::string _name, int _gold, int _age, int _minPlayers) : 
 			name(_name), resourceCost(std::unique_ptr<Resource>(new Resource())), gold(_gold), age(_age), minPlayers(_minPlayers) {}

MilitaryCard::MilitaryCard(std::string _name, int brick, int stone, int wood, int ore, int _age, int _gold, int _minPlayers) :
 			name(_name), resourceCost(std::unique_ptr<Resource>(new Resource(brick, stone, wood, ore))), gold(_gold), age(_age), minPlayers(_minPlayers) {}

MilitaryCard::MilitaryCard(std::string _name, int brick, int stone, int wood, int ore, int glass, int carpet, int paper, int _gold, int _age, int _minPlayers) :
 			name(_name), resourceCost(std::unique_ptr<Resource>(new Resource(brick, stone, wood, ore, glass, carpet, paper))), gold(_gold), age(_age), minPlayers(_minPlayers) {}

MilitaryCard::~MilitaryCard() {}

std::shared_ptr<Resource> MilitaryCard::getResourceCost() {
	return resourceCost;
}

void MilitaryCard::play() {}