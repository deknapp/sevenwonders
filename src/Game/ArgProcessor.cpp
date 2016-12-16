#include "../../include/game/ArgProcessor.h"
#include <iostream>
#include <string>

std::string ArgProcessor::strategyForPlayer(int i) {
	return strategies.at(i);
}

ArgProcessor::ArgProcessor(int argc, char* argv[]) : wonderSide("A") {


	numPlayers = atoi(argv[1]);
	std::cout << "NUMBER OF PLAYERS " << numPlayers << std::endl;

	numGames = atoi(argv[2]);
	std::cout << "NUMBER OF GAMES " << numGames << std::endl;

	for (int i=0; i < numPlayers; i++) {
		std::string playerStrategy;

		if (i + 3 < argc)
			playerStrategy = std::string(argv[i + 3]);
		else
			playerStrategy = std::string("random");

		strategies.push_back(playerStrategy);
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
