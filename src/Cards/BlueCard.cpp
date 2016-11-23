#include "../../include/cards/BlueCard.h"
#include <string>

BlueCard::BlueCard(std::string _name, int _age, int _points, int _minPlayers) :
 			name(_name), resourceCost(std::unique_ptr<Resource>(new Resource(0, 0, 0, 0))), age(_age), points(_points), minPlayers(_minPlayers) {}

BlueCard::BlueCard(std::string _name, int brick, int stone, int wood, int ore, int _age, int _points, int _minPlayers) : 
 			name(_name), resourceCost(std::unique_ptr<Resource>(new Resource(brick, stone, wood, ore))), age(_age), points(_points), minPlayers(_minPlayers) {}

BlueCard::~BlueCard() {}
