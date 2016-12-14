#include "../../include/results/Score.h"
#include <map>
#include <string>
#include <vector>

Score::Score() {}

Score::~Score() {}

void Score::print() {}

void Score::addPlayer(std::shared_ptr<Player> player) {
	std::vector<std::string> strategies = player->getStrategies();
	orderedScores.insert(std::pair<int, std::vector<std::string> >(player->score(), strategies));
	scores.insert(std::pair<std::vector<std::string>, int>(strategies, player->score()));
}

std::map<std::vector<std::string>, int> Score::getPlaces() {
	std::map<std::vector<std::string>, int> places;
	int place = 0;
	for (auto const& it:orderedScores) {
		places.insert(std::pair<std::vector<std::string>, int>(it.second, place));
		place += 1;
	}

	return places;
}

std::map<std::vector<std::string>, int> Score::getScores() {
	return scores;
}