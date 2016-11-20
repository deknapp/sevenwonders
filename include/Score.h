#ifndef Score_H
#define Score_H

#include <vector>

#include "Card.h"
#include "Score.h"
#include "Wonder.h"


class Score {

 public:
	Score();
	~Score();
	print();

 private:
 	
 	std::string name;
 	int guild;
 	int money;
 	int points;
 	int science;
 	int wonders;
 	int yellow;

 	// prevent generated functions --------------------------------------------
	Score(const Score&);
	Score& operator=(const Score&);
};

#endif /* Score_H */

