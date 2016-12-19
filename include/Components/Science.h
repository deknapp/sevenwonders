#ifndef Science_H
#define Science_H

#include <vector>

class Science {

 public:
	Science();
	~Science();
	unsigned int score();
	void addCard(std::string type, int amount);
	unsigned int wild;
	double getValue(std::string type, int round, double weight);

 private:

 	unsigned int wheels;
 	unsigned int abacus;
 	unsigned int tablet;

 	// prevent generated functions --------------------------------------------
	Science(const Science&);
	Science& operator=(const Science&);
};

#endif /* Science_H */

