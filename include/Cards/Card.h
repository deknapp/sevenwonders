#ifndef Card_H
#define Card_H

#include <vector>

class Card {

 public:
	Card();
	~Card();

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

