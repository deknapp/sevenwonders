#include "../../include/cards/MilitaryCard.h"

#include <string> 

MilitaryCard::MilitaryCard(std::string _name, int _gold, int _minPlayers) : 
 			name(_name), resourceCost(std::unique_ptr<Resource>(new Resource(0, 0, 0, 0))), gold(_gold), minPlayers(_minPlayers) {}

MilitaryCard::MilitaryCard(std::string _name, int brick, int stone, int wood, int ore, int _gold, int _minPlayers) : 
 			name(_name), resourceCost(std::unique_ptr<Resource>(new Resource(brick, stone, wood, ore))), gold(_gold), minPlayers(_minPlayers) {}

MilitaryCard::~MilitaryCard() {}