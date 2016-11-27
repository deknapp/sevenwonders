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

 	std::shared_ptr<BlueCard> getBlueCard();
 	std::shared_ptr<MilitaryCard> getMilitaryCard();
 	std::shared_ptr<ScienceCard> getScienceCard();
 	std::shared_ptr<ResourceCard> getResourceCard();

 	bool hasBlue();
 	bool hasMilitary();
 	bool hasResource();
 	bool hasScience();
 	
 private:

 	std::vector<std::shared_ptr<BlueCard> > blueCards;
 	std::vector<std::shared_ptr<MilitaryCard> > militaryCards;
 	std::vector<std::shared_ptr<ResourceCard> > resourceCards;
 	std::vector<std::shared_ptr<ScienceCard> > scienceCards;

 	// prevent generated functions --------------------------------------------
	Deck(const Deck&);
	Deck& operator=(const Deck&);
};

#endif /* Deck_H */