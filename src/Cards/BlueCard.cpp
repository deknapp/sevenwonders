#include "../../include/cards/BlueCard.h"
#include <string>

BlueCard::BlueCard(std::string _name, int money) : 
 			name(_name), cost(new Resource(0, 0, 0, 0)) {}

BlueCard::BlueCard(std::string _name, int money, int brick, int stone, int wood, int ore) : 
 			name(_name), cost(new Resource(money, brick, stone, wood, ore)), minPlayers(_minPlayers) {}

BlueCard::~BlueCard() {}
