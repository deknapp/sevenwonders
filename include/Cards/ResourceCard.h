#ifndef ResourceCard_H
#define ResourceCard_H

#include <vector>

class ResourceCard {

 public:
	ResourceCard();
	~ResourceCard();

 private:

 	std::string name;
 	Cost cost;
 	Type type;
 	
 	// prevent generated functions --------------------------------------------
	ResourceCard(const ResourceCard&);
	ResourceCard& operator=(const ResourceCard&);
};

#endif /* ResourceCard_H */
