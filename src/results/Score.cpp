#include "../../include/results/Score.h"
#include <map>
#include <string>
#include <vector>

Score::Score() {}

Score::~Score() {}

void Score::print() {}

void Score::addPlayer(std::shared_ptr<Player> player) {
	// std::string strategy = player->getStrategy();
	// orderedScores.insert(std::pair<int, std::string >(player->score(), strategy));
	// scores.insert(std::pair<std::string, int>(strategy, player->score()));
}

std::map<std::string, int> Score::getPlaces() {
	std::map<std::string, int> places;
	int place = 0;
	for (auto const& it:orderedScores) {
		places.insert(std::pair<std::string, int>(it.second, place));
		place += 1;
	}

	return places;
}

std::map<std::string, int> Score::getScores() {
	return scores;
}