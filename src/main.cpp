#include <iostream>
#include <vector>

#include "Game.h"
#include "Score.h"
#include "Results.h"

int main(int argc, char* argv[]) {

	ArgProcessor args(argc, argv);
	std::vector<Results> all_results;
	int numOfPlayers = args.getNumberOfPlayers();

	Results results;

	for (int i=0; i<args.getNumberOfGames(); i++) {

		std::unique_ptr<Game> game(new Game(numOfPlayers, strategies));
		all_results.push_back(game->play());
	}

	Analyzer analyzer(all_results);
	analyzer.print();
}