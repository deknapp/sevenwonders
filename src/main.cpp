#include <iostream>
#include <vector>

#include "Game.h"
#include "Score.h"
#include "Results.h"

int main(int argc, char* argv[]) {

	std::vector<Results> all_results;

	if (argv[0] > 2)
		std::cout << "invalid number of arguments" << std::endl;

	int number_of_games = argv[1];

	Results results;

	for (int i=0; i<number_of_games; i++) {

		std::unique_ptr<Game> game(new Game());
		all_results.push_back(game->play());
	}

	Analyzer analyzer(all_results);
	analyzer.print();
}