#ifndef Guild_H
#define Guild_H

#include <vector>

#include "Card.h"
#include "Guild.h"
#include "Wonder.h"

class Guild {

 public:
	Guild();
	~Guild();
	int operator>(const Guild& b);

 private:

 	int wood;
 	int brick;
 	int stone;
 	int ore;

 	// prevent generated functions --------------------------------------------
	Guild(const Guild&);
	Guild& operator=(const Guild&);
};

#endif /* Guild_H */

