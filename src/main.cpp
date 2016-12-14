#include "../include/game/ArgProcessor.h"
#include "../include/game/Game.h"
#include <iostream>

int main(int argc, char* argv[]) {

	Game game(std::unique_ptr<ArgProcessor>(new ArgProcessor(argc, argv)));
	game.play();

	// TODO: get scores of multiple games, combine them into results, print them 
}
