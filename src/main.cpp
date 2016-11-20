

#include <iostream>

#include "Game.h"
#include "Score.h"
#include "Results.h"

int main(int argc, char* argv[]) {

	if (argv[0] > 2)
		std::cout << "invalid number of arguments" << std::endl;

	int number_of_games = argv[1];

	Results results;

	for (int i=0; i<number_of_games; i++) {

		Game* game;
		Score* score = game.score();
		results.add(score);
	}

	results.analzye();
	results.print();

}