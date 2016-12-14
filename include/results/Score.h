#ifndef Score_H
#define Score_H

#include <vector>
#include <string>

class Score {

 public:
	Score();
	~Score();
	print();

 private:

 	std::map<std::string, int> playerScores;
 	std::map<std::string, int> playerPlaces;

 	// prevent generated functions --------------------------------------------
	Score(const Score&);
	Score& operator=(const Score&);
};

#endif /* Score_H */

