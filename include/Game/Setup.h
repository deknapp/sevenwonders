#ifndef Setup_H
#define Setup_H

#include <vector>

#include "Card.h"
#include "Setup.h"
#include "Wonder.h"

class Setup {

 public:
	Setup();
	~Setup();
	int score();
	int strength();

 private:

 	int score;
 	int strength;

 	// prevent generated functions --------------------------------------------
	Setup(const Setup&);
	Setup& operator=(const Setup&);
};

#endif /* Setup_H */

