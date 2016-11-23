#include "../../include/cards/ResourceCard.h"
#include <string>

ResourceCard::ResourceCard(std::string _name, int _gold, int _minPlayers) : 
 			name(_name), resourceCost(new Resource(0, 0, 0, 0)), gold(_gold), minPlayers(_minPlayers) {}

ResourceCard::ResourceCard(std::string _name, int brick, int stone, int wood, int ore, int _gold, int _minPlayers) : 
 			name(_name), resourceCost(new Resource(brick, stone, wood, ore)), gold(_gold), minPlayers(_minPlayers) {}

ResourceCard::~ResourceCard() {}