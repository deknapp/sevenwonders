#ifndef Science_H
#define Science_H

#include <vector>

class Science {

 public:
	Science();
	~Science();
	unsigned int score();
	void addCard(std::string type);
	unsigned int wild;

 private:

 	unsigned int wheels;
 	unsigned int abacus;
 	unsigned int tablet;

 	// prevent generated functions --------------------------------------------
	Science(const Science&);
	Science& operator=(const Science&);
};

#endif /* Science_H */

