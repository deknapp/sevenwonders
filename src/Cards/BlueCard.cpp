#include "../../include/cards/BlueCard.h"
#include <string>


BlueCard::BlueCard(std::string _name, int _age, int _minPlayers, int _points) :
						 Card("blue", _name, _age, _minPlayers), points(_points) {}

BlueCard::BlueCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _points):
						 Card("blue", _name, _age, wood, stone, brick, ore, _minPlayers), points(_points) {}

BlueCard::BlueCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _points):
						 Card("blue", _name, _age, glass, carpet, paper, _minPlayers), points(_points) {}
						
BlueCard::BlueCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers, int _points) :
						Card("blue", _name, _age, wood, stone, brick, ore, glass, carpet, paper, _minPlayers), points(_points){}

BlueCard::~BlueCard() {}

bool BlueCard::canBuy(std::set<std::string> playedCards, std::shared_ptr<Resource> resource) {

	if (playedCards.count(name))
		return false;
	if (canCardBuy(buyCards, playedCards))
		return true;
	if (resourceCost > resource)
		return false;
	else
		return true;
}

int BlueCard::getPoints() {
	return points;
}

