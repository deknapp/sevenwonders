#ifndef PointsCard_H
#define PointsCard_H

#include <vector>

class PointsCard {

 public:
	PointsCard();
	~PointsCard();

 private:

 	std::string name;
 	Cost cost;
 	Type type;
 	
 	// prevent generated functions --------------------------------------------
	PointsCard(const PointsCard&);
	PointsCard& operator=(const PointsCard&);
};

#endif /* PointsCard_H */
