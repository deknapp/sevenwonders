#include "../../include/cards/BlueCard.h"
#include <string>

BlueCard::BlueCard(std::string _name, int _minPlayers) : 
 			name(_name), resourceCost(std::unique_ptr<Resource>(new Resource(0, 0, 0, 0))), minPlayers(_minPlayers) {}

BlueCard::BlueCard(std::string _name, int brick, int stone, int wood, int ore, int _minPlayers) : 
 			name(_name), resourceCost(std::unique_ptr<Resource>(new Resource(brick, stone, wood, ore))), minPlayers(_minPlayers) {}

BlueCard::~BlueCard() {}
