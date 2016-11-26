#include "../../include/game/Deck.h"
#include <iostream>

Deck::Deck() {}

Deck::~Deck() {}

void Deck::discard() {

	if (blueCards.size() > 0)
		blueCards.pop_back();
	if (scienceCards.size() > 0)
		scienceCards.pop_back();
	if (militaryCards.size() > 0)
		militaryCards.pop_back();
	if (resourceCards.size() > 0)
		resourceCards.pop_back();
}

int Deck::containsCard(std::string name) {

	if (currentCards.count(name) != 0) 
		return 1;
	else 
		return 0;
}

int Deck::cardPlayed(std::string name) {

	if (playedCards.count(name) != 0) 
		return 1;
	else 
		return 0;
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

std::shared_ptr<MilitaryCard> Deck::getMilitaryCard() {
	return militaryCards.at(randomInt(militaryCards.size()));
}

std::shared_ptr<ScienceCard> Deck::getScienceCard() {

	return scienceCards.at(randomInt(scienceCards.size()));
}

std::shared_ptr<ResourceCard> Deck::getResourceCard() {
	return resourceCards.at(randomInt(resourceCards.size()));
}


std::shared_ptr<MilitaryCard> Deck::buyMilitaryCard(std::shared_ptr<Resource> resource) {
	for (const auto& card:militaryCards) {
		if (resource > card->getResourceCost())
			return card;
	}
	return NULL;
}

std::shared_ptr<ScienceCard> Deck::buyScienceCard(std::shared_ptr<Resource> resource) {

	for (const auto& card:scienceCards) {
		if (resource > card->getResourceCost())
			return card;
	}
	return NULL;
}

std::shared_ptr<ResourceCard> Deck::buyResourceCard(int gold) {
	for (const auto& card:resourceCards) {
		if (gold > card->getGoldCost())
			return card;
	}
	return NULL;
}