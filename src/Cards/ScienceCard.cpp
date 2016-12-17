#include "../../include/cards/ScienceCard.h"
#include <string>

ScienceCard::ScienceCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, std::string _category):
						 Card("science", _name, _age, glass, carpet, paper, _minPlayers), category(_category) {}

ScienceCard::ScienceCard(std::string _name, 
						 int glass, int carpet, int paper, std::string buyCardA, std::string buyCardB,
						 int _age, int _minPlayers, std::string _category):
						 Card("science", _name, glass, carpet, paper, buyCardA, buyCardB, _age, _minPlayers), category(_category) {}
						
ScienceCard::ScienceCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers, std::string _category) :
						Card("science", _name, wood, stone, brick, ore, glass, carpet, paper, _age, _minPlayers), category(_category){}


ScienceCard::ScienceCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, std::string buyCardA, std::string buyCardB, int _age, 
						int _minPlayers, std::string _category) :
						Card("science", _name, wood, stone, brick, ore, glass, carpet, paper, buyCardA, buyCardB, _age, _minPlayers), category(_category){}

ScienceCard::~ScienceCard() {}

std::string ScienceCard::getType() {
	return category;
}

