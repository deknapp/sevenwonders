#include "Game.h"

Game::Game(): {}

Game::~Game() {}

Game::getResourceCards(int minPlayers) {

	std::string type = "Resource";
	int cost = 0;
	deck.push_back(new ResourceCard("lumberYard", cost, age, 1, 0, 0, 0, minPlayers);
	deck.push_back(new ResourceCard("stonePit", cost, age, 0, 1, 0, 0, minPlayers);
	deck.push_back(new ResourceCard("clayPool", cost, age, 0, 0, 1, 0, minPlayers);
	deck.push_back(new ResourceCard("oreVein", cost, age, 0, 0, 0, 1, minPlayers);

	cost = 1;
	int age = 2;

	deck.push_back(new ResourceCard("sawmill", cost, age, 2, 0, 0, 0, minPlayers);
	deck.push_back(new ResourceCard("quarry", cost, age, 0, 2, 0, 0, minPlayers);
	deck.push_back(new ResourceCard("brickyard", cost, age, 0, 0, 2, 0, minPlayers);
	deck.push_back(new ResourceCard("foundry", cost, age, 0, 0, 0, 2, minPlayers);

	int either_or = 1;
	age = 1;

	deck.push_back(new ResourceCard("clayPit", cost, age, 0, 0, 1, 1, either_or, minPlayers);
	deck.push_back(new ResourceCard("timberYard", cost, age, 1, 1, 0, 0, either_or, minPlayers);	

	if (minPlayers > 3) {
		deck.push_back(new ResourceCard("excavation", cost, age, 0, 1, 0, 1, either_or, minPlayers);
	}

	if (minPlayers > 4) {
		deck.push_back(new ResourceCard("forestCave", cost, age, 1, 0, 0, 1, either_or, minPlayers);
	}

	if (minPlayers > 5) {
		deck.push_back(new ResourceCard("mine", cost, age, 0, 1, 0, 1, either_or, minPlayers);
		deck.push_back(new ResourceCard("treeFarm", cost, age, 1, 0, 1, 0, either_or, minPlayers);
	}
}

Game::getBlueCards(int minPlayers) {

	int points = 2;

	deck.push_back(new BlueCard("altar", points, minPlayers));
	deck.push_back(new BlueCard("theater", points, minPlayers));


	points = 3;
	deck.push_back(new BlueCard("baths", 0, 1, 0, 0, points, minPlayers));
	deck.push_back(new BlueCard("temple", 0, 1, 0, 0, 1, 0, 0, points, minPlayers));

	points = 4;
	deck.push_back(new BlueCard("statue", 1, 0, 0, 2, points, minPlayers));
	deck.push_back(new BlueCard("courthouse", 0, 0, 2, 0, 0, 1, 0, points, minPlayers));

	points = 5;
	deck.push_back(new BlueCard("aqueduct", 0, 3, 0, 0, points, minPlayers));
	deck.push_back(new BlueCard("gardens", 1, 0, 2, 0, points, minPlayers));

	points = 6;
	deck.push_back(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9  points, minPlayers));
	deck.push_back(new BlueCard("senate", 2, 1, 0, 1, points, minPlayers));

	points = 7;
	deck.push_back(new BlueCard("pantheon", 0, 0, 2, 1, 1, 1, 1, points, minPlayers));

	points = 8;
	deck.push_back(new BlueCard("palace", 1, 1, 1, 1, 1, 1, 1, points, minPlayers));

	if (minPlayers > 3)
		deck.push_back(new BlueCard("pawnshop", 0, 1, 0, 0, points, minPlayers));
}

Game::getMilitaryCards() {

	int age = 1;

	deck.push_back(new MilitaryCard("stockade", 1, 0, 0, 0, age, minPlayers));
	deck.push_back(new MilitaryCard("barracks", 0, 0, 0, 1, age, minPlayers));
	deck.push_back(new MilitaryCard("guardTower", 0, 0, 1, 0, age,  minPlayers));

	int age = 2, 

	deck.push_back(new MilitaryCard("walls", 0, 3, 0, 0, age,  minPlayers));
	deck.push_back(new MilitaryCard("stables", 1, 0, 1, 1, age, minPlayers));
	deck.push_back(new MilitaryCard("archeryRange", 2, 0, 0, 1, age, minPlayers));

	int age = 3;

	deck.push_back(new MilitaryCard("fortifications", 0, 1, 0, 3, age,  minPlayers));
	deck.push_back(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, minPlayers));
	deck.push_back(new MilitaryCard("siegeWorkshop", 1, 3, 0, 0, age, minPlayers));


	if (minPlayers > 3) {
		deck.push_back(new MilitaryCard("trainingGround", 1, 0, 0, 2, 2,  minPlayers));
		deck.push_back(new MilitaryCard("circus", 0, 3, 0, 1, 3,  minPlayers));
	}
}

Game::getScienceCards() {

	int age = 1;

	deck.push_back(new ScienceCard("apothecary", 0, 1, 0, "A", age, minPlayers));
	deck.push_back(new ScienceCard("workshop", 1, 0, 0, "wheel", age, minPlayers));
	deck.push_back(new ScienceCard("scriptorium", 0, 0, 1, "tablet", age, minPlayers));

	int age = 2, 

	deck.push_back(new ScienceCard("apothecary", 0, 0, 0, 2, 1, 0, 8, "A", age, minPlayers));
	deck.push_back(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1, "wheel", age, minPlayers));
	deck.push_back(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0, "tablet", age, minPlayers));
	deck.push_back(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1, "tablet", age, minPlayers));

	int age = 3;

	deck.push_back(new ScienceCard("apothecary", 0, 0, 0, 2, 1, 0, 8, "A", age, minPlayers));
	deck.push_back(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1, "wheel", age, minPlayers));
	deck.push_back(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0, "tablet", age, minPlayers));
	deck.push_back(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1, "tablet", age, minPlayers));


	if (minPlayers > 3) {
	}
}

Game::getDeck(int numPlayers) {

	getResourceCards(numPlayers);
	getBlueCards(numPlayers);
	getMilitaryCards(numPlayers);
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

