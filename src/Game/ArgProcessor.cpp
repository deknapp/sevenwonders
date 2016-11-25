#include "../../include/game/ArgProcessor.h"
#include <iostream>
#include <string>

std::string ArgProcessor::strategyAt(int i) {
	return strategies.at(i);
}

ArgProcessor::ArgProcessor(int argc, char* argv[]) {

	numPlayers = atoi(argv[1]);
	numGames = atoi(argv[2]);

	for (int i=0; i < numPlayers; i++) {
		if (i < argc - 1)
			strategies.push_back(std::string(argv[i]));
		else
			strategies.push_back(std::string("random"));
	}
}

int ArgProcessor::getNumPlayers() {
	return numPlayers;
}

int ArgProcessor::getNumGames() {
	return numGames;
}

std::vector<std::string> ArgProcessor::getStrategies() {
	return strategies;
}
