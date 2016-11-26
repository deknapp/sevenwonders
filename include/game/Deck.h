#ifndef Deck_H
#define Deck_H

#include <vector>
#include <string>
#include <set>
#include "../RandomUtility.h"
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

 	void addBlueCard(std::shared_ptr<BlueCard> card);
 	void addMilitaryCard(std::shared_ptr<MilitaryCard> card);
 	void addScienceCard(std::shared_ptr<ScienceCard> card);
 	void addResourceCard(std::shared_ptr<ResourceCard> card);

 	std::shared_ptr<BlueCard> getBlueCard();
 	std::shared_ptr<MilitaryCard> getMilitaryCard();
 	std::shared_ptr<ScienceCard> getScienceCard();
 	std::shared_ptr<ResourceCard> getResourceCard();

 	int containsCard(std::string card_name);
 	int cardPlayed(std::string card_name);

 	int canPlayScience(std::shared_ptr<Resource> resource);
 	int canPlayMilitary(std::shared_ptr<Resource> resource);

 	std::shared_ptr<ScienceCard> buyScienceCard(std::shared_ptr<Resource> resource);
 	std::shared_ptr<MilitaryCard> buyMilitaryCard(std::shared_ptr<Resource> resource);
 	std::shared_ptr<ResourceCard> buyResourceCard(int gold);

 private:

 	std::set<std::string> currentCards;
 	std::set<std::string> playedCards;
 	std::vector<std::shared_ptr<BlueCard>> blueCards;
 	std::vector<std::shared_ptr<MilitaryCard>> militaryCards;
 	std::vector<std::shared_ptr<ResourceCard>> resourceCards;
 	std::vector<std::shared_ptr<ScienceCard>> scienceCards;
 	
 	
 	// prevent generated functions --------------------------------------------
	Deck(const Deck&);
	Deck& operator=(const Deck&);
};

#endif /* Deck_H */