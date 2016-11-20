#include "Game.h"

Game::Game(): {}

Game::~Game() {}

Game::play(int round) {
	for (int i=0; i<NUM_ROUNDS; i++) {
		for (const auto& it: players) 
			it.play(round);
	}

	return score();
}

Game::score() {
	
	// TODO

}

