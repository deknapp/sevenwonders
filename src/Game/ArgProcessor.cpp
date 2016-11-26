#include "../../include/game/ArgProcessor.h"
#include <iostream>
#include <string>

std::vector<std::string> ArgProcessor::strategiesForPlayer(int i) {
	return strategies.at(i);
}

ArgProcessor::ArgProcessor(int argc, char* argv[]) {

	numPlayers = atoi(argv[1]);
	numGames = atoi(argv[2]);

	for (int i=0; i < numPlayers; i++) {
		std::vector<std::string> playerStrategies;
		for (int i = 0; i < 3; i++) {
			if (i + 2 < argc - 1)
				playerStrategies.push_back(std::string(argv[i + 2]));
			else
				playerStrategies.push_back(std::string("random"));
		}
		strategies.push_back(playerStrategies);
	}
}

int ArgProcessor::getNumPlayers() {
	return numPlayers;
}

int ArgProcessor::getNumGames() {
	return numGames;
}

std::vector<std::vector<std::string> > ArgProcessor::getStrategies() {
	return strategies;
}
