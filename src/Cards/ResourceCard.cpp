#include "../../include/cards/ResourceCard.h"
#include <string>
#include <iostream>

ResourceCard::ResourceCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _gold):
						 Card("resource", _name, _age, wood, stone, brick, ore,  _minPlayers), gold(_gold), isBrown(true), index(0) {

						 	if (wood > 0)
						 		index = 0;
						 	if (stone > 0)
						 		index = 1;
						 	if (brick > 0)
						 		index = 2;
						 	if (ore > 0)
						 		index = 3;
						 }

ResourceCard::ResourceCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _either_or, int _gold):
						 Card("resource", _name, _age, wood, stone, brick, ore,  _minPlayers), gold(_gold), either_or(_either_or), isBrown(true) {


						 	if (wood > 0)
						 		index = 0;
						 	if (stone > 0)
						 		index = 1;
						 	if (brick > 0)
						 		index = 2;
						 	if (ore > 0)
						 		index = 3;

						 }
						
ResourceCard::ResourceCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _gold):
						 Card("resource", _name, _age, glass, carpet, paper,  _minPlayers), gold(_gold), isBrown(false) {

						 	if (glass > 0)
						 		index = 4;
						 	if (carpet > 0)
						 		index = 5;
						 	if (paper > 0)
						 		index = 6;
						 }

ResourceCard::~ResourceCard() {}

int ResourceCard::getResourceGoldCost() {
	return gold;
}

bool ResourceCard::canPurchase(int buyGold, std::set<std::string> playedCards) {
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