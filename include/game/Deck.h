#ifndef Deck_H
#define Deck_H

#include <vector>
#include <string>

#include "../cards/Card.h"

class Deck {

 public:

 	void addBlueCard(std::shared_ptr<BlueCard>);
 	void addMilitaryCard(std::shared_ptr<MilitaryCard>);
 	void addScienceCard(std::shared_ptr<ScienceCard>);
 	void addResourceCard(std::shared_ptr<ResourceCard>);

 	void getBlueCard(std::shared_ptr<BlueCard>);
 	void getMilitaryCard(std::shared_ptr<MilitaryCard>);
 	void getScienceCard(std::shared_ptr<ScienceCard>);
 	void getResourceCard(std::shared_ptr<ResourceCard>);

 	void shuffle();
 	void removeRandom(std::string type);
 	std::shared_ptr<Deck> getAffordableCards(std::shared_ptr<Player> player);
 	int cardInDeck(std::string card_name);

 private:

 	std::vector<std::shared_ptr<BlueCard>> blueCards;
 	std::vector<std::shared_ptr<MilitaryCard>> militaryCards;
 	std::vector<std::shared_ptr<ResourceCard>> resourceCards;
 	std::vector<std::shared_ptr<ScienceCard>> scienceCards;
 	
 	
 	// prevent generated functions --------------------------------------------
	Deck(const Deck&);
	Deck& operator=(const Deck&);
};

#endif /* Deck_H */