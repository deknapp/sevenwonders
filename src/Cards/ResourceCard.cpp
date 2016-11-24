#include "../../include/cards/ResourceCard.h"
#include <string>

ResourceCard::ResourceCard(std::string _name, int _age, int _gold, int _minPlayers) : 
 			name(_name), age(_age), resourceCost(new Resource(0, 0, 0, 0)), gold(_gold), minPlayers(_minPlayers) {}

ResourceCard::ResourceCard(std::string _name, int _age, int _gold, int wood, int stone, int brick, int ore, int _minPlayers) : 
 			name(_name), age(_age), resourceCost(new Resource(wood, stone, brick, ore)), gold(_gold), either_or(0), minPlayers(_minPlayers) {}

ResourceCard::ResourceCard(std::string _name, int _age, int _gold, int wood, int stone, int brick, int ore, int _either_or, int _minPlayers) : 
 			name(_name), age(_age), resourceCost(new Resource(wood, stone, brick, ore)), gold(_gold), either_or(_either_or), minPlayers(_minPlayers) {}

ResourceCard::~ResourceCard() {}

std::shared_ptr<Resource> ResourceCard::getResourceCost() {
	return resourceCost;
}

void ResourceCard::play() {}