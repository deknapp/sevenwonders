#include "../../include/cards/BlueCard.h"
#include <string>


BlueCard::BlueCard(std::string _name, int _age, int _minPlayers, int _points) :
						 Card("blue", _name, _age, _minPlayers), points(_points) {}

BlueCard::BlueCard(std::string _name, std::string buyCard, int _age, int _minPlayers, int _points) :
						 Card("blue", _name, buyCard, _age, _minPlayers), points(_points) {}

BlueCard::BlueCard(std::string _name, std::string buyCard, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _points):
						 Card("blue", _name, wood, stone, brick, ore, buyCard, _age, _minPlayers), points(_points) {}

BlueCard::BlueCard(std::string _name, 
						 int wood, int stone, int brick, int ore, 
						 int _age, int _minPlayers, int _points):
						 Card("blue", _name, _age, wood, stone, brick, ore, _minPlayers), points(_points) {}

BlueCard::BlueCard(std::string _name, std::string buyCard,
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _points):
						 Card("blue", _name, glass, carpet, paper, buyCard, _age, _minPlayers), points(_points) {}

BlueCard::BlueCard(std::string _name,
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _points):
						 Card("blue", _name, glass, carpet, paper, _age, _minPlayers), points(_points) {}
						
BlueCard::BlueCard(std::string _name, std::string buyCard,
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper,  int _age, 
						int _minPlayers, int _points) :
						Card("blue", _name, wood, stone, brick, ore, glass, carpet, paper, buyCard, _age, _minPlayers), points(_points){}

BlueCard::BlueCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers, int _points) :
						Card("blue", _name, wood, stone, brick, ore, glass, carpet, paper, _age, _minPlayers), points(_points){}

BlueCard::~BlueCard() {}


int BlueCard::getPoints() {
	return points;
}

