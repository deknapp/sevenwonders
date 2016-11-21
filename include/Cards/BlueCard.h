#ifndef BlueCard_H
#define BlueCard_H

#include <vector>

class BlueCard {

 public:
	BlueCard();
	~BlueCard();

 private:

 	std::string name;
 	Cost cost;
 	Type type;
 	
 	// prevent generated functions --------------------------------------------
	BlueCard(const BlueCard&);
	BlueCard& operator=(const BlueCard&);
};

#endif /* BlueCard_H */
