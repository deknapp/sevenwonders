#include "../../include/cards/ResourceCard.h"
#include <string>

ResourceCard::ResourceCard(std::string _name, int _age,  int _minPlayers, int _gold) :
						 Card("resource", _name, _age, _minPlayers), gold(_gold) {}

ResourceCard::ResourceCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _gold):
						 Card("resource", _name, _age, wood, stone, brick, ore,  _minPlayers), gold(_gold) {}

ResourceCard::ResourceCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _either_or, int _gold):
						 Card("resource", _name, _age, wood, stone, brick, ore,  _minPlayers), either_or(_either_or), gold(_gold) {}
						

ResourceCard::ResourceCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _gold):
						 Card("resource", _name, _age, glass, carpet, paper,  _minPlayers), gold(_gold) {}
						

ResourceCard::~ResourceCard() {}