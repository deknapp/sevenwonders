#ifndef ScienceCard_H
#define ScienceCard_H

#include <vector>

class ScienceCard {

 public:
	ScienceCard();
	~ScienceCard();

 private:

 	std::string name;
 	Cost cost;
 	Type type;
 	
 	// prevent generated functions --------------------------------------------
	ScienceCard(const ScienceCard&);
	ScienceCard& operator=(const ScienceCard&);
};

#endif /* ScienceCard_H */
