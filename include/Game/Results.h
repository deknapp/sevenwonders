#ifndef Results_H
#define Results_H

#include <vector>

#include "Card.h"
#include "Results.h"
#include "Wonder.h"

class Results {

 public:
	Results();
	~Results();
	print();

 private:

 	std::vector<Score> scores;
 	
 	// prevent generated functions --------------------------------------------
	Results(const Results&);
	Results& operator=(const Results&);
};

#endif /* Results_H */

