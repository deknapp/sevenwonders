#ifndef Results_H
#define Results_H

#include <vector>
#include "Score.h"
#include "../../rapidjson/include/rapidjson/prettywriter.h"
#include "../../rapidjson/include/rapidjson/stringbuffer.h"

class Results {

 public:

	Results();
	~Results();
	void add(std::shared_ptr<Score> score);
	void printJsonFile();

 private:

 	int totalGames;

 	// map of strategies to a fraction list that indicates the fraction of the time that the strategy wins
 	std::map<double, std::string> getPercentageOfWins();

 	// map of strategies to a number list that indicates the total score 
 	std::map<std::string, int> strategyScores;

 	// map of strategies to a number list that indicates the number of places of each strategy
 	std::map<std::string, std::vector<int>> strategyPlaces;

 	// prevent generated functions --------------------------------------------
	Results(const Results&);
	Results& operator=(const Results&);
};

#endif /* Results_H */

