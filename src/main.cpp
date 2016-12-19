#include "../include/game/ArgProcessor.h"
#include "../include/game/Game.h"
#include "../include/results/Results.h"
#include <iostream>

int main(int argc, char* argv[]) {

	std::shared_ptr<ArgProcessor> args(new ArgProcessor(argc, argv));
	
	if (args->areNotCorrect()) {
		std::cout << "Something was wrong with the arguments. Double check them!" << std::endl;
		return 0;
	}

	Results results;
	for (int i = 0; i < args->getNumGames(); i++) {
		Game game(args);
		results.add(game.play());
	}
	
	results.printJsonFile();
}
