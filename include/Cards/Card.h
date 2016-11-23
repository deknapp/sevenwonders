#ifndef Card_H
#define Card_H

#include <vector>
#include <string>

#include "../components/Resource.h"

class Card {

 public:
	Card();
	~Card();
	virtual void play() = 0;

 private:

 	std::string name;
 	Resource cost;
 	std::string type;
 	int minPlayers;
 	
 	// prevent generated functions --------------------------------------------
	Card(const Card&);
	Card& operator=(const Card&);
};

#endif /* Card_H */

