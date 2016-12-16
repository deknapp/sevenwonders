#ifndef Score_H
#define Score_H

#include <vector>
#include <string>
#include <map>
#include "../game/Player.h"

class Score {

 public:
	Score();
	~Score();
	void print();
	void addPlayer(std::shared_ptr<Player> player);
	std::map<std::string, int> getPlaces();
	std::map<std::string, int> getScores();

 private:

 	std::map<int, std::string > orderedScores;
  	std::map<std::string, int> scores;

 	// prevent generated functions --------------------------------------------
	Score(const Score&);
	Score& operator=(const Score&);
};

#endif /* Score_H */

