#include "../../include/game/ArgProcessor.h"
#include <iostream>
#include <string>

ArgProcessor::ArgProcessor(int argc, char* argv[]) : wonderSide("A"), problems(false) {


	if (argc != 6) {
		problems = true;
		return;
	}

	numPlayers = atoi(argv[1]);
	
	if (numPlayers < 3 || numPlayers > 7) {
		problems = true;
		return;
	}

	std::cout << "NUMBER OF PLAYERS " << numPlayers << std::endl;

	numGames = atoi(argv[2]);
	if (numGames <= 0) {
		problems = true;
		return;
	}

	std::cout << "NUMBER OF GAMES " << numGames << std::endl;

	resourceWeight = atof(argv[3]);
	if (resourceWeight < 0 || resourceWeight > 1) {
		problems = true;
		return;
	}

	std::cout << "resourceWeight " << resourceWeight << std::endl;

	resourceConstant = atof(argv[4]);
	if (resourceConstant <= 0) {
		problems = true;
		return;
	}
	
	std::cout << "resourceConstant " << resourceConstant << std::endl;

	scienceWeight = atof(argv[5]);
	if (scienceWeight < 1) {
		problems = true;
		return;
	}

	std::cout << "scienceWeight " << scienceWeight << std::endl;

}

bool ArgProcessor::areNotCorrect() {
	return problems;
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

double ArgProcessor::getScienceWeight() {
	return scienceWeight;
}