#ifndef GuildCard_H
#define GuildCard_H

#include <vector>
#include <string>
#include "Card.h"

class GuildCard : public Card {

 public:
 	GuildCard(std::string _name, int _age, int _minPlayers);
 	GuildCard(std::string _name, 
						 int wood, int stone, int brick, int ore,
						 int _age, int _minPlayers);
 	GuildCard(std::string _name, 
						 int glass, int carpet, int paper, 
						 int _age, int _minPlayers);
 	GuildCard(std::string _name, 
						int wood, int stone, int brick, int ore, int glass, int carpet, int paper, int _age, 
						int _minPlayers);

	~GuildCard();

 private:

 	// prevent generated functions --------------------------------------------
	GuildCard(const GuildCard&);
	GuildCard& operator=(const GuildCard&);
};

#endif /* GuildCard_H */
