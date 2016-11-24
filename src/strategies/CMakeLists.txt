#include "../../include/game/ArgProcessor.h"
#include <iostream>
#include <string>

std::string ArgProcessor::strategyAt(int i) {
	return strategies.at(i);
}

ArgProcessor::ArgProcessor(int argc, char* argv[]) {

	if (atoi(argv[0]) < 3) 
		std::cout << "invalid number of arguments" << std::endl;

	numGames = atoi(argv[2]);
	numPlayers = atoi(argv[1]);

	for (int i=3; i < argc; i++) 
		strategies.push_back(std::string(argv[i]));

	int numRandoms = numPlayers - (argc - 2);

	if (numRandoms > 0) {
		for (int i= 0; i<numRandoms; i++) {
			strategies.push_back(std::string("random"));
		}	
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
