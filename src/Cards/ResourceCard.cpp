#include "../../include/cards/ResourceCard.h"
#include <string>
#include <iostream>

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
						 Card("resource", _name, _age, glass, carpet, paper,  _minPlayers), gold(_gold) {}\
						

ResourceCard::~ResourceCard() {}

int ResourceCard::getResourceGoldCost() {
	return gold;
}

bool ResourceCard::canBuy(int buyGold, std::set<std::string> playedCards) {
	if (playedCards.count(name)) {
		return false;
	}
	if (gold > buyGold) {
		return false;
	}
	else {
		return true;
	}
}