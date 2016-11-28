#include "../../include/cards/GuildCard.h"
#include <string>


GuildCard::GuildCard(std::string _name, int _age, int _minPlayers) :
						 Card("guild", _name, _age, _minPlayers) {}

GuildCard::GuildCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers):
						 Card("guild", _name, _age, wood, stone, brick, ore, _minPlayers) {}

GuildCard::GuildCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers):
						 Card("guild", _name, _age, glass, carpet, paper, _minPlayers) {}
						
GuildCard::GuildCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers) :
						Card("guild", _name, _age, wood, stone, brick, ore, glass, carpet, paper, _minPlayers){}

GuildCard::~GuildCard() {}


int GuildCard::getPoints() {
	return points;
}

