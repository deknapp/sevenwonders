#ifndef BlueCard_H
#define BlueCard_H

#include <vector>
#include <string>
#include <set>
#include <cstdbool>

#include "../Utility.h"
#include "../cards/Card.h"
#include "../components/Resource.h"

class BlueCard : public Card {

 public:
	BlueCard(std::string _name, int _age, int _minPlayers, int _points);
	BlueCard(std::string _name, std::string buyCard, int _age, int _minPlayers, int _points);
	BlueCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _points);

	BlueCard(std::string _name, std::string buyCard,
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers, int _points);

	BlueCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _points);

	BlueCard(std::string _name, std::string buyCard, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers, int _points);


	BlueCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers, int _points);

	BlueCard(std::string _name, std::string buyCard,
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper,  int _age, 
						int _minPlayers, int _points);
	~BlueCard();

	int getPoints();

 private:
 	int points;


 	// prevent generated functions --------------------------------------------
	BlueCard(const BlueCard&);
	BlueCard& operator=(const BlueCard&);
};

#endif /* BlueCard_H */