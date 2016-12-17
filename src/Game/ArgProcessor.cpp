#include "../../include/game/ArgProcessor.h"
#include <iostream>
#include <string>

ArgProcessor::ArgProcessor(int argc, char* argv[]) : wonderSide("A") {


	numPlayers = atoi(argv[1]);
	std::cout << "NUMBER OF PLAYERS " << numPlayers << std::endl;

	numGames = atoi(argv[2]);
	std::cout << "NUMBER OF GAMES " << numGames << std::endl;

	resourceWeight = atoi(argv[3]);
	std::cout << "resourceWeight " << resourceWeight << std::endl;

	resourceConstant = atoi(argv[4]);
	std::cout << "resourceConstant " << resourceConstant << std::endl;

}

int ArgProcessor::getNumPlayers() {
	return numPlayers;
}

int ArgProcessor::getNumGames() {
	return numGames;
}

double ArgProcessor::getResourceConstant() {
	return resourceConstant;
}

double ArgProcessor::getResourceWeight() {
	return resourceWeight;
}