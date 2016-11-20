#ifndef MilitaryCard_H
#define MilitaryCard_H

#include <vector>

class MilitaryCard {

 public:
	MilitaryCard();
	~MilitaryCard();

 private:

 	std::string name;
 	Cost cost;
 	Type type;
 	
 	// prevent generated functions --------------------------------------------
	MilitaryCard(const MilitaryCard&);
	MilitaryCard& operator=(const MilitaryCard&);
};

#endif /* MilitaryCard_H */
