#include "../../include/cards/MilitaryCard.h"

#include <string> 

MilitaryCard::MilitaryCard(std::string _name, int _age, int _minPlayers) :
						 Card("military", _name, _age, _minPlayers) {}
						
MilitaryCard::MilitaryCard(std::string _name, 
						 int wood, int stone, int brick, int ore, 
						 int _age, int _minPlayers):
						 Card("military", _name, _age, wood, stone, brick, ore,  _minPlayers) {}
						
MilitaryCard::MilitaryCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers) :
						Card("military", _name, _age, wood, stone, brick, ore, glass, carpet, paper, _minPlayers) {}

MilitaryCard::~MilitaryCard() {}


int MilitaryCard::getStrength() {

	if (age == 0)
		return 1;
	if (age == 1)
		return 3;
	if (age == 2)
		return 5;
	else 
		return 0;
}