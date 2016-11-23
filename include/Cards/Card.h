#ifndef Card_H
#define Card_H

#include <vector>
#include <string>

#include "../components/Resource.h"

class Card {

 public:
	Card();
	virtual ~Card();
	virtual void play();

 private:
 	
 	// prevent generated functions --------------------------------------------
	Card(const Card&);
	Card& operator=(const Card&);
};

#endif /* Card_H */

