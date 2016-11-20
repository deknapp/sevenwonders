#ifndef YellowCard_H
#define YellowCard_H

#include <vector>

class YellowCard {

 public:
	YellowCard();
	~YellowCard();

 private:

 	std::string name;
 	Cost cost;
 	Type type;
 	
 	// prevent generated functions --------------------------------------------
	YellowCard(const YellowCard&);
	YellowCard& operator=(const YellowCard&);
};

#endif /* YellowCard_H */
