#ifndef Military_H
#define Military_H

#include <vector>

class Military {

 public:
	Military();
	~Military();
	int getScore();
	int getStrength();

 private:

 	int score;
 	int strength;

 	// prevent generated functions --------------------------------------------
	Military(const Military&);
	Military& operator=(const Military&);
};

#endif /* Military_H */

