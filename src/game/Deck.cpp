#include "../../include/game/Deck.h"
#include <iostream>

Deck::Deck() {}

Deck::~Deck() {}

void Deck::filterForNumPlayers(int numPlayers) {


	for (int i=scienceCards.size() - 1; i >= 0; i--) {
		if (numPlayers < scienceCards.at(i)->minPlayers)
			scienceCards.erase(scienceCards.begin() + i);
	}

	for (int i=militaryCards.size() - 1; i >= 0; i--) {
		if (numPlayers < militaryCards.at(i)->minPlayers)
			militaryCards.erase(militaryCards.begin() + i);
	}

	for (int i=blueCards.size() - 1; i >= 0; i--) {
		if (numPlayers < blueCards.at(i)->minPlayers)
			blueCards.erase(blueCards.begin() + i);
	}

	for (int i=resourceCards.size() - 1; i >= 0; i--) {
		if (numPlayers < resourceCards.at(i)->minPlayers)
			resourceCards.erase(resourceCards.begin() + i);
	}
}

void Deck::print() {

	std::cout << "PRINTING DECK" << std::endl;
	std::cout << scienceCards.size() << " TOTAL SCIENCE CARDS" << std::endl;
	for (auto const& card:scienceCards) {
		std::cout << card->getName() << std::endl;
	}

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

void Deck::addGuildCard(std::shared_ptr<GuildCard> card) {
	if (card)
		guildCards.push_back(card);
}

void Deck::addEconomyCard(std::shared_ptr<EconomyCard> card) {
	if (card)
		economyCards.push_back(card);
}

void Deck::addBlueCard(std::shared_ptr<BlueCard> card) {
	if (card)
		blueCards.push_back(card);
}

void Deck::addMilitaryCard(std::shared_ptr<MilitaryCard> card) {
	if (card)
		militaryCards.push_back(card);
}

void Deck::addScienceCard(std::shared_ptr<ScienceCard> card) {
	if (card)
		scienceCards.push_back(card);
}

void Deck::addResourceCard(std::shared_ptr<ResourceCard> card) {
	if (card)
		resourceCards.push_back(card);
}

std::vector<std::shared_ptr<BlueCard> > Deck::getBlueCards() {

	return blueCards;
}

std::vector<std::shared_ptr<MilitaryCard> > Deck::getMilitaryCards() {

	return militaryCards;
}

std::vector<std::shared_ptr<ScienceCard> > Deck::getScienceCards() {

	return scienceCards;
}

std::vector<std::shared_ptr<ResourceCard> > Deck::getResourceCards() {

	return resourceCards;
}

std::vector<std::shared_ptr<GuildCard> > Deck::getGuildCards() {

	return guildCards;
}


std::vector<std::shared_ptr<EconomyCard> > Deck::getEconomyCards() {

	return economyCards;
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

std::shared_ptr<GuildCard> Deck::getGuildCard() {

	if (guildCards.size() == 0) {
		return nullptr;
	}

	std::shared_ptr<GuildCard> popped = guildCards.at(guildCards.size() - 1);
	guildCards.pop_back();
	return popped;
}


std::shared_ptr<EconomyCard> Deck::getEconomyCard() {

	if (economyCards.size() == 0) {
		return nullptr;
	}

	std::shared_ptr<EconomyCard> popped = economyCards.at(economyCards.size() - 1);
	economyCards.pop_back();
	return popped;
}

