#include "../include/game/ArgProcessor.h"
#include "../include/game/Game.h"
#include "../include/results/Results.h"
#include <iostream>

int main(int argc, char* argv[]) {

	std::shared_ptr<ArgProcessor> args(new ArgProcessor(argc, argv));
	Results results;
	for (int i = 0; i < args->getNumGames(); i++) {
		Game game(args);
		results.add(game.play());
	}
	
	results.printJsonFile();
}
