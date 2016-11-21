#include <iostream>
#include <vector>

#include "ArgProcessor.h"
#include "Game.h"

int main(int argc, char* argv[]) {

	ArgProcessor args(argc, argv);
	Game game(args.getNumberOfPlayers(), args.getStrategies());
	game.play();
	game.printScores();
}