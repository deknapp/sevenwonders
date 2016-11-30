#include "../../include/game/ArgProcessor.h"
#include <iostream>
#include <string>

std::vector<std::string> ArgProcessor::strategiesForPlayer(int i) {
	return strategies.at(i);
}

ArgProcessor::ArgProcessor(int argc, char* argv[]) : wonderSide("A") {

	numPlayers = atoi(argv[1]);
	std::cout << "NUMBER OF PLAYERS " << numPlayers << std::endl;

	numGames = atoi(argv[2]);
	std::cout << "NUMBER OF GAMES " << numGames << std::endl;

	for (int i=0; i < numPlayers; i++) {
		std::vector<std::string> playerStrategies;
		for (int j = 0; j < 3; j++) {
			if (3*i + j + 2 < argc - 1)
				playerStrategies.push_back(std::string(argv[3*i + j + 3]));
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
