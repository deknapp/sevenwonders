#ifndef GuildCard_H
#define GuildCard_H

#include <vector>

class GuildCard {

 public:
	GuildCard();
	~GuildCard();

 private:

 	std::string name;
 	Cost cost;
 	Type type;
 	
 	// prevent generated functions --------------------------------------------
	GuildCard(const GuildCard&);
	GuildCard& operator=(const GuildCard&);
};

#endif /* GuildCard_H */
