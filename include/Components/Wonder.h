#ifndef Wonder_H
#define Wonder_H

#include <vector>
#include <string>
#include "Resource.h"

class Wonder {

 public:
	Wonder(std::string _name, int wood, int stone, int brick, int ore);
	Wonder(std::string _name, int glass, int carpet, int paper);
	~Wonder();
	int status;

 private:

 	std::string name;
 	std::shared_ptr<Resource> resource;

 	// prevent generated functions --------------------------------------------
	Wonder(const Wonder&);
	Wonder& operator=(const Wonder&);
};

#endif /* Wonder_H */

