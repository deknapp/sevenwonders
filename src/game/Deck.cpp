#include "../../include/game/Deck.h"
#include <iostream>

Deck::Deck() {}

Deck::~Deck() {}

std::shared_ptr<Deck> Deck::getAffordableCards(std::shared_ptr<Resource> resource, std::shared_ptr<Resource> resourcesToTradeFor, std::set<std::string> playedCards) {

	std::shared_ptr<Deck> affordable(new Deck());

	for (auto const& card:resourceCards) {
		if (card->canPurchase(resource->gold, playedCards)) {
			resource->gold -= card->gold;
			affordable->addResourceCard(card);
		}
	}

	for (auto const& card:blueCards) {
		// card->cost = 0;
		//int newCost = card->canBuy(playedCards, resource, resourcesToTradeFor);
		//if (newCost >= 0) {
			//card->cost = newCost;
			affordable->addBlueCard(card);
		//}
	}

	for (auto const& card:militaryCards) {
		//card->cost = 0;
		// int newCost = card->canBuy(playedCards, resource, resourcesToTradeFor);
		// if (newCost >= 0) {
			//card->cost = newCost;
			affordable->addMilitaryCard(card);
		//}
	}


	for (auto const& card:scienceCards) {
		//card->cost = 0;
		// int newCost = card->canBuy(playedCards, resource, resourcesToTradeFor);
		// if (newCost >= 0) {
			//card->cost = newCost;
			affordable->addScienceCard(card);
		//}
	}
	
	return affordable;
}

void Deck::print() {
	std::cout << "PRINTING DECK " << std::endl;
	std::cout << "ScienceCards total = " << scienceCards.size() << std::endl;
	std::cout << "ResourceCards total = " << resourceCards.size() << std::endl;
	std::cout << "MilitaryCards total = " << militaryCards.size() << std::endl;
	std::cout << "BlueCards total = " << blueCards.size() << std::endl;
}

void Deck::discard() {

	if (blueCards.size() > 0)
		blueCards.pop_back();
	else if (scienceCards.size() > 0)
		scienceCards.pop_back();
	else if (militaryCards.size() > 0)
		militaryCards.pop_back();
	else if (resourceCards.size() > 0)
		resourceCards.pop_back();
}


int Deck::size() {
	return resourceCards.size() + scienceCards.size() + blueCards.size() + militaryCards.size();
}

// ADD METHODS
void Deck::addBlueCard(std::shared_ptr<BlueCard> card) {
	blueCards.push_back(card);
}

void Deck::addMilitaryCard(std::shared_ptr<MilitaryCard> card) {
	militaryCards.push_back(card);
}

void Deck::addScienceCard(std::shared_ptr<ScienceCard> card) {
	scienceCards.push_back(card);
}

void Deck::addResourceCard(std::shared_ptr<ResourceCard> card) {
	resourceCards.push_back(card);
}

std::shared_ptr<BlueCard> Deck::getBlueCard() {

	if (blueCards.size() == 0) {
		return nullptr;
	}

	std::shared_ptr<BlueCard> popped = blueCards.at(blueCards.size() - 1);
	blueCards.pop_back();
	return popped;

}

std::shared_ptr<MilitaryCard> Deck::getMilitaryCard() {

	if (militaryCards.size() == 0) {
		return nullptr;
	}

	std::shared_ptr<MilitaryCard> popped = militaryCards.at(militaryCards.size() - 1);
	militaryCards.pop_back();
	return popped;
}

std::shared_ptr<ScienceCard> Deck::getScienceCard() {

	if (scienceCards.size() == 0) {
		return nullptr;
	}

	std::shared_ptr<ScienceCard> popped = scienceCards.at(scienceCards.size() - 1);
	scienceCards.pop_back();
	return popped;
}

std::shared_ptr<ResourceCard> Deck::getResourceCard() {

	if (resourceCards.size() == 0) {
		return nullptr;
	}

	std::shared_ptr<ResourceCard> popped = resourceCards.at(resourceCards.size() - 1);
	resourceCards.pop_back();
	return popped;
}

