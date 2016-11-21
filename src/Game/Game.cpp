#include "Game.h"

Game::Game(): {}

Game::~Game() {}

Game::getResourceCards(int minPlayers) {

	std::string type = "Resource";
	int cost = 0;
	deck.push_back(new ResourceCard("lumberYard", cost, 1, 0, 0, 0, minPlayers);
	deck.push_back(new ResourceCard("stonePit", cost, 0, 1, 0, 0, minPlayers);
	deck.push_back(new ResourceCard("clayPool", cost, 0, 0, 1, 0, minPlayers);
	deck.push_back(new ResourceCard("oreVein", cost, 0, 0, 0, 1, minPlayers);

	int cost = 1;
	int either_or = 1;

	deck.push_back(new ResourceCard("clayPit", cost, 0, 0, 1, 1, either_or, minPlayers);
	deck.push_back(new ResourceCard("timberYard", cost, 1, 1, 0, 0, either_or, minPlayers);	

	if (minPlayers > 4) {
		deck.push_back(new ResourceCard("excavation", cost, 0, 1, 0, 1, either_or, minPlayers);
	}

	if (minPlayers > 5) {
		deck.push_back(new ResourceCard("forestCave", cost, 1, 0, 0, 1, either_or, minPlayers);
	}

	if (minPlayers > 6) {
		deck.push_back(new ResourceCard("mine", cost, 0, 1, 0, 1, either_or, minPlayers);
		deck.push_back(new ResourceCard("treeFarm", cost, 1, 0, 1, 0, either_or, minPlayers);
	}

}

Game::getDeck(int numPlayers) {

	getResourceCards(numPlayers);
	getBlueCards(numPlayers);
	getMilitaryCards(numPlayers);
	getMarketCards(numPlayers);
	getGuildCards(numPlayers);
	getScienceCards(numPlayers);
}

Game::setup() {

	getDeck();
	separateAges();
}

Game::play(int round) {

	setup();

	for (int i=0; i<NUM_ROUNDS; i++) {
		for (const auto& it: players) 
			it.play(round);
	}

	return score();
}

