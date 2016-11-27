#include "../../include/cards/ScienceCard.h"
#include <string>

ScienceCard::ScienceCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, std::string _category):
						 Card("science", _name, _age, glass, carpet, paper, _minPlayers), category(_category) {}
						
ScienceCard::ScienceCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers, std::string _category) :
						Card("science", _name, _age, wood, stone, brick, ore, glass, carpet, paper, _minPlayers), category(_category){}

ScienceCard::~ScienceCard() {}

bool ScienceCard::canBuy(std::set<std::string> playedCards, std::shared_ptr<Resource> resourcePay, std::shared_ptr<Resource> resourceToTrade) {

	if (playedCards.count(name))
		return false;
	// if (canCardBuy(buyCards, playedCards))
	// 	return true;
	if (resourcePay->canBuy(resourceCost, resourceToTrade))
		return true;
	else
		return false;
}

std::string ScienceCard::getCategory() {
	return category;
}

