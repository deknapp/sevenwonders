#include "../include/game/ArgProcessor.h"
#include "Game.h"

int main(int argc, char* argv[]) {

	Game game(std::unique_ptr<ArgProcessor>(new ArgProcessor(argc, argv)));
	game.play();
}