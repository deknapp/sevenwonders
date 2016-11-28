#include "../../include/cards/EconomyCard.h"
#include <string>


EconomyCard::EconomyCard(std::string _name, int _age, int _minPlayers) :
						 Card("economy", _name, _age, _minPlayers) {}

EconomyCard::EconomyCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers):
						 Card("economy", _name, _age, wood, stone, brick, ore, _minPlayers) {}

EconomyCard::EconomyCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers):
						 Card("economy", _name, _age, glass, carpet, paper, _minPlayers) {}
						
EconomyCard::EconomyCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers) :
						Card("economy", _name, _age, wood, stone, brick, ore, glass, carpet, paper, _minPlayers) {}

EconomyCard::~EconomyCard() {}


int EconomyCard::getPoints() {
	return points;
}

