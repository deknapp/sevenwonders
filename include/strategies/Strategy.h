

#ifndef Strategy_H
#define Strategy_H

#include <vector>

#include "../cards/Card.h"
#include "../RandomUtility.h"

class Strategy {

 public:
	Strategy();
	~Strategy();
	virtual int chooseCardToPlay(std::vector<std::shared_ptr<Card>> cards);

 private:
 	// prevent generated functions --------------------------------------------
	Strategy(const Strategy&);
	Strategy& operator=(const Strategy&);
};

#endif /* Strategy_H */

