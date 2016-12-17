#ifndef Military_H
#define Military_H

#include <vector>

class Military {

 public:
	Military();
	~Military();
	int getScore();
	unsigned int getStrength();
	double getValue(int round, int left_strength, int right_strength);
	void addPoints(int newPoints);
	void addStrength(int strength);
	unsigned int strength;

 private:

 	int score;

 	// prevent generated functions --------------------------------------------
	Military(const Military&);
	Military& operator=(const Military&);
};

#endif /* Military_H */

