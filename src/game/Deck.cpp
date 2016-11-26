#include "../../include/game/Deck.h"
#include <iostream>

Deck::Deck() {}

Deck::~Deck() {}

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

