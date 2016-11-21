#include "ResourceCard.h"

ResourceCard::ResourceCard(std::string _name, int money, std::string _type, int _minPlayers) : 
 			name(_name), cost(new Resource(money, 0, 0, 0, 0)), type(_type), minPlayers(_minPlayers) {}

ResourceCard::ResourceCard(std::string _name, int money, int brick, int stone, int wood, int ore, std::string _type, int _minPlayers) : 
 			name(_name), cost(new Resource(money, brick, stone, wood, ore)), type(_type), minPlayers(_minPlayers) {}

ResourceCard::~ResourceCard() {}