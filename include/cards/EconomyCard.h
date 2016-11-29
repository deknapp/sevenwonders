#ifndef EconomyCard_H
#define EconomyCard_H

#include <vector>
#include <string>
#include "Card.h"

class EconomyCard : public Card{

 public:
	EconomyCard(std::string _name, int _age, int _minPlayers);
	EconomyCard(std::string _name, std::string buyCard, int _age, int _minPlayers);
	EconomyCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers);
	EconomyCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers);
	EconomyCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers);
	~EconomyCard();

 private:

 	// prevent generated functions --------------------------------------------
	EconomyCard(const EconomyCard&);
	EconomyCard& operator=(const EconomyCard&);
};

#endif /* EconomyCard_H */
