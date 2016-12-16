#ifndef Deck_H
#define Deck_H

#include <vector>
#include <string>
#include <set>
#include "../Utility.h"
#include "../cards/Card.h"
#include "../cards/BlueCard.h"
#include "../cards/MilitaryCard.h"
#include "../cards/ResourceCard.h"
#include "../cards/ScienceCard.h"
#include "../cards/GuildCard.h"
#include "../cards/EconomyCard.h"

class Deck {

 public:

 	Deck();
 	~Deck();

 	int size();
 	void discard();
 	void print();
 	void addBlueCard(std::shared_ptr<BlueCard> card);
 	void addMilitaryCard(std::shared_ptr<MilitaryCard> card);
 	void addScienceCard(std::shared_ptr<ScienceCard> card);
 	void addResourceCard(std::shared_ptr<ResourceCard> card);
 	void addGuildCard(std::shared_ptr<GuildCard> card);
 	void addEconomyCard(std::shared_ptr<EconomyCard> card);

 	std::vector<std::shared_ptr<BlueCard> > getBlueCards();
 	std::vector<std::shared_ptr<MilitaryCard> > getMilitaryCards();
 	std::vector<std::shared_ptr<ResourceCard> > getResourceCards();
 	std::vector<std::shared_ptr<ScienceCard> > getScienceCards();
 	std::vector<std::shared_ptr<GuildCard> > getGuildCards();
 	std::vector<std::shared_ptr<EconomyCard> > getEconomyCards();


 	std::shared_ptr<BlueCard> getBlueCard();
 	std::shared_ptr<MilitaryCard> getMilitaryCard();
 	std::shared_ptr<ScienceCard> getScienceCard();
 	std::shared_ptr<ResourceCard> getResourceCard();
 	std::shared_ptr<EconomyCard> getEconomyCard();
 	std::shared_ptr<GuildCard> getGuildCard();

 	bool hasBlue();
 	bool hasMilitary();
 	bool hasResource();
 	bool hasScience();
 	void filterForNumPlayers(int numPlayers);
 	
 private:

 	std::vector<std::shared_ptr<BlueCard> > blueCards;
 	std::vector<std::shared_ptr<MilitaryCard> > militaryCards;
 	std::vector<std::shared_ptr<ResourceCard> > resourceCards;
 	std::vector<std::shared_ptr<ScienceCard> > scienceCards;
 	std::vector<std::shared_ptr<GuildCard> > guildCards;
 	std::vector<std::shared_ptr<EconomyCard> > economyCards;

 	// prevent generated functions --------------------------------------------
	Deck(const Deck&);
	Deck& operator=(const Deck&);
};

#endif /* Deck_H */