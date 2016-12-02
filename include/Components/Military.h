#ifndef Military_H
#define Military_H

#include <vector>

class Military {

 public:
	Military();
	~Military();
	int getScore();
	int getStrength();
	void addPoints(int newPoints);
	void addStrength(int strength);
	int strength;

 private:

 	int score;

 	// prevent generated functions --------------------------------------------
	Military(const Military&);
	Military& operator=(const Military&);
};

#endif /* Military_H */

