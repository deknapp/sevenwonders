#ifndef WonderCard_H
#define WonderCard_H

#include <vector>
#include <string>
#include <set>
#include <cstdbool>

#include "../Utility.h"
#include "../cards/Card.h"
#include "../components/Resource.h"

class WonderCard : public Card {

 public:
	WonderCard(std::string _name, int _age, int _minPlayers, int _points);
	WonderCard(std::string _name, std::string buyCard, int _age, int _minPlayers, int _points);
	WonderCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _points);

	WonderCard(std::string _name, std::string buyCard,
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _points);

	WonderCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _points);

	WonderCard(std::string _name, std::string buyCard, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _points);


	WonderCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers, int _points);

	WonderCard(std::string _name, std::string buyCard,
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper,  int _age, 
						int _minPlayers, int _points);
	~WonderCard();

	int getPoints();

 private:
 	int points;


 	// prevent generated functions --------------------------------------------
	WonderCard(const WonderCard&);
	WonderCard& operator=(const WonderCard&);
};

#endif /* WonderCard_H */