#include "../../include/game/Game.h"
#include "../../include/cards/BlueCard.h"
#include "../../include/cards/MilitaryCard.h"
#include "../../include/cards/ResourceCard.h"
#include "../../include/cards/ScienceCard.h"
#include "../../include/Constants.h"

#include <iostream>


Game::Game(std::shared_ptr<ArgProcessor> args_pointer) : args(args_pointer) {

	for (int i = 0; i < 3; i++) {
		decks.push_back(std::shared_ptr<Deck>(new Deck()));
	}
	numPlayers = args_pointer->getNumPlayers();
}

Game::~Game() {}

void Game::getResourceCards() {

	int gold = 0;
	int age= 1;
	int minPlayers = 3;
		
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("lumberYard", 1, 0, 0, 0, age, gold, minPlayers)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("stonePit", 0, 1, 0, 0, age, gold, minPlayers)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("clayPool", 0, 0, 1, 0, age, gold, minPlayers)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("oreVein", 0, 0, 0, 1, age, gold, minPlayers)));


	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("glassworks", 1, 0, 0, age, gold, minPlayers)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("loom", 0, 1, 0, age, gold, minPlayers)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("press", 0, 0, 1, age, gold, minPlayers)));

	minPlayers = 4;
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("oreVein", 0, 0, 0, 1, age, gold, minPlayers)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("lumberYard", 1, 0, 0, 0, age, gold, minPlayers)));

	minPlayers = 5;
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("clayPool", 0, 0, 1, 0, age, gold, minPlayers)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("stonePit", 0, 1, 0, 0, age, gold, minPlayers)));

	minPlayers = 6;
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("glassworks", 1, 0, 0, age, gold, minPlayers)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("loom", 0, 1, 0, age, gold, minPlayers)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("press", 0, 0, 1, age, gold, minPlayers)));

	gold = 1;
	age = 2;
	minPlayers = 3;

	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("sawmill", 2, 0, 0, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("quarry", 0, 2, 0, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("brickyard", 0, 0, 2, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("foundry", 0, 0, 0, 2, age, gold, minPlayers)));

	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("glassworks", 1, 0, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("loom", 0, 1, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("press", 0, 0, 1, age, gold, minPlayers)));

	minPlayers = 4;

	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("sawmill", 2, 0, 0, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("quarry", 0, 2, 0, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("brickyard", 0, 0, 2, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("foundry", 0, 0, 0, 2, age, gold, minPlayers)));

	minPlayers = 5;

	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("glassworks", 1, 0, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("loom", 0, 1, 0, age, gold, minPlayers)));
	decks.at(1)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("press", 0, 0, 1, age, gold, minPlayers)));

	int either_or = 1;
	age = 1;
	minPlayers = 3;

	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("clayPit", 0, 0, 1, 1, age, gold, minPlayers, either_or)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("timberYard", 1, 1, 0, 0, age, gold, minPlayers, either_or)));	

	minPlayers = 4;
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("excavation", 0, 1, 0, 1, age, gold, minPlayers, either_or)));

	minPlayers = 5;
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("forestCave", 1, 0, 0, 1, age, gold, minPlayers, either_or)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("timberYard", 1, 1, 0, 0, age, gold, minPlayers, either_or)));	

	minPlayers = 6;
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("mine", 0, 1, 0, 1, age, gold, minPlayers, either_or)));
	decks.at(0)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("treeFarm", 1, 0, 1, 0, age, gold, minPlayers, either_or)));
}

void Game::getBlueCards() {


	// FIRST AGE
	int age = 1;
	int points = 2;
	int minPlayers = 3;

	decks.at(0)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("altar", age, minPlayers, points)));
	decks.at(0)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("theater", age, minPlayers, points)));

	points = 3;
	decks.at(0)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("baths", 0, 1, 0, 0, age, minPlayers, points)));
	decks.at(0)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("temple", 0, 1, 0, 0, 1, 0, 0, age, minPlayers, points)));

	minPlayers = 4;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("pawnshop", 0, 1, 0, 0, age, minPlayers, points)));

	// SECOND AGE
	age = 2;
	minPlayers = 3;
	points = 4;
	decks.at(1)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("statue", 1, 0, 0, 2, age, minPlayers, points)));
	decks.at(1)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("courthouse", 0, 0, 2, 0, 0, 1, 0, age, minPlayers, points)));
	points = 5;
	decks.at(1)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("aqueduct", 0, 3, 0, 0, age, minPlayers, points)));

	minPlayers = 5;
	points = 4;
	decks.at(1)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("courthouse", 0, 0, 2, 0, 0, 1, 0, age, minPlayers, points)));

	minPlayers = 6;
	points = 5;
	decks.at(1)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("aqueduct", 0, 3, 0, 0, age, minPlayers, points)));

	minPlayers = 7;
	points = 4;
	decks.at(1)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("statue", 1, 0, 0, 2, age, minPlayers, points)));

	// THIRD AGE
	age = 3;
	minPlayers = 3;

	points = 5;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("gardens", 1, 0, 2, 0, age, minPlayers, points)));

	points = 6;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9, age, minPlayers, points)));
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("senate", 2, 1, 0, 1, age, minPlayers, points)));

	points = 7;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("pantheon", 0, 0, 2, 1, 1, 1, 1, age, minPlayers, points)));

	points = 8;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("palace", 1, 1, 1, 1, 1, 1, 1, age, minPlayers, points)));

	minPlayers = 4;
	points = 5;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("gardens", 1, 0, 2, 0, age, minPlayers, points)));

	minPlayers = 5;
	points = 6;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9, age, minPlayers, points)));
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("senate", 2, 1, 0, 1, age, minPlayers, points)));

	minPlayers = 6;
	points = 6;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9, age, minPlayers, points)));
	points = 7;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("pantheon", 0, 0, 2, 1, 1, 1, 1, age, minPlayers, points)));

	minPlayers = 7;
	points = 8;
	decks.at(2)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("palace", 1, 1, 1, 1, 1, 1, 1, age, minPlayers, points)));
}

void Game::getMilitaryCards() {

	// FIRST AGE
	int age = 1;
	int minPlayers = 3;
	decks.at(0)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("stockade", 1, 0, 0, 0, age, minPlayers)));
	decks.at(0)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("barracks", 0, 0, 0, 1, age, minPlayers)));
	decks.at(0)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("guardTower", 0, 0, 1, 0, age, minPlayers)));

	minPlayers = 4;
	decks.at(0)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("guardTower", 0, 0, 1, 0, age, minPlayers)));

	minPlayers = 5;
	decks.at(0)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("barracks", 0, 0, 0, 1, age, minPlayers)));

	minPlayers = 7;
	decks.at(0)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("stockade", 1, 0, 0, 0, age, minPlayers)));

	// SECOND AGE
	age = 2, 
	minPlayers = 3;
	decks.at(1)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("walls", 0, 3, 0, 0, age, minPlayers)));
	decks.at(1)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("stables", 1, 0, 1, 1, age, minPlayers)));
	decks.at(1)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("archeryRange", 2, 0, 0, 1, age, minPlayers)));

	minPlayers = 4;
	decks.at(1)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("trainingGround", 1, 0, 0, 2, age, minPlayers)));

	minPlayers = 5;
	decks.at(1)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("stables", 1, 0, 1, 1, age, minPlayers)));

	minPlayers = 6;
	decks.at(1)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("archeryRange", 2, 0, 0, 1, age, minPlayers)));
	decks.at(1)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("trainingGround", 1, 0, 0, 2, age, minPlayers)));

	minPlayers = 7;
	decks.at(1)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("walls", 0, 3, 0, 0, age, minPlayers)));
	decks.at(1)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("trainingGround", 1, 0, 0, 2, age, minPlayers)));

	// THIRD AGE
	age = 3;
	minPlayers = 3;
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("fortifications", 0, 1, 0, 3, age, minPlayers)));
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, minPlayers)));
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("siegeWorkshop", 1, 3, 0, 0, age, minPlayers)));

	minPlayers = 4;
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("circus", 0, 3, 0, 1, age, minPlayers)));
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, minPlayers)));

	minPlayers = 5;
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("siegeWorkshop", 1, 3, 0, 0, age, minPlayers)));
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("circus", 0, 3, 0, 1, age, minPlayers)));

	minPlayers = 6;
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("circus", 0, 3, 0, 1, age, minPlayers)));

	minPlayers = 7;
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, minPlayers)));
	decks.at(2)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("fortifications", 0, 1, 0, 3, age, minPlayers)));
}

void Game::getScienceCards() {

	// FIRST AGE
	int age = 1;
	int minPlayers = 3;
	decks.at(0)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 1, 0, age, minPlayers, "A")));
	decks.at(0)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("workshop", 1, 0, 0, age, minPlayers, "wheel")));
	decks.at(0)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("scriptorium", 0, 0, 1, age, minPlayers, "tablet")));

	minPlayers = 4;
	decks.at(0)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("scriptorium", 0, 0, 1, age, minPlayers, "tablet")));

	minPlayers = 5;
	decks.at(0)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 1, 0, age, minPlayers, "A")));

	minPlayers = 7;
	decks.at(0)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("workshop", 1, 0, 0, age, minPlayers, "wheel")));

	// SECOND AGE
	age = 2, 
	minPlayers = 3;
	decks.at(1)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("dispensary", 0, 0, 0, 2, 1, 0, 8, age, minPlayers, "A")));
	decks.at(1)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1,  age, minPlayers, "wheel")));
	decks.at(1)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0,  age, minPlayers, "tablet")));
	decks.at(1)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1,  age, minPlayers, "tablet")));

	minPlayers = 4;
	decks.at(1)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("dispensary", 0, 0, 0, 2, 1, 0, 8, age, minPlayers, "A")));

	minPlayers = 5;
	decks.at(1)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1,  age, minPlayers, "wheel")));

	minPlayers = 6;
	decks.at(1)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0,  age, minPlayers, "tablet")));

	minPlayers = 7;
	decks.at(1)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1,  age, minPlayers, "tablet")));

	// THIRD AGE
	age = 3;
	minPlayers = 3;
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("university", 0, 0, 2, 0, 1, 0, 1,  age, minPlayers, "tablet")));
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("study", 1, 0, 0, 0, 0, 1, 1,  age, minPlayers, "wheel")));
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("lodge", 0, 0, 2, 0, 0, 1, 1,  age, minPlayers, "A")));
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("observatory", 0, 0, 0, 2, 1, 1, 0,  age, minPlayers, "wheel")));
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("academy", 0, 3, 0, 0, 1, 0, 0, age, minPlayers, "A")));

	minPlayers = 4;
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("university", 0, 0, 2, 0, 1, 0, 1,  age, minPlayers, "tablet")));

	minPlayers = 5;
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("study", 1, 0, 0, 0, 0, 1, 1,  age, minPlayers, "wheel")));

	minPlayers = 6;
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("lodge", 0, 0, 2, 0, 0, 1, 1,  age, minPlayers, "A")));

	minPlayers = 7;
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("observatory", 0, 0, 0, 2, 1, 1, 0,  age, minPlayers, "wheel")));
	decks.at(2)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("academy", 0, 3, 0, 0, 1, 0, 0, age, minPlayers, "A")));
}

void Game::getDeck() {

	getResourceCards();
	getBlueCards();
	getMilitaryCards();
	getScienceCards();

	// TODO: add other types of cards. 

	for (int i = 0; i < 3; i++) {
		decks.at(i)->filterForNumPlayers(numPlayers);
		decks.at(i)->print();
	}
}

void Game::dealRound(int rund) {

	for (const auto& player: players) {
		for (int i=0; i<NUM_CARDS; i++)  {
			player->addRandomCardToHand(decks.at(rund));
		}
	}
}

std::shared_ptr<Player> Game::playerAt(int i) {
	return players.at(i);
}

void Game::initPlayers() {

	int numPlayers = args->getNumPlayers();
	for (int i=0; i<numPlayers; i++) 
		players.push_back(std::shared_ptr<Player>(new Player(i)));
	
	playerAt(0)->setLeft(playerAt(numPlayers - 1));
	playerAt(0)->setRight(playerAt(1));
	playerAt(numPlayers - 1)->setLeft(playerAt(numPlayers - 2));
	playerAt(numPlayers - 1)->setRight(playerAt(0));

	for (int i=1; i<numPlayers - 1; i++) {
		playerAt(i)->setLeft(playerAt(i-1));
		playerAt(i)->setRight(playerAt(i+1));
	}

	for (int i = 0; i < players.size(); i ++) 
		players.at(i)->initStrategies(args->strategiesForPlayer(i));
}

void Game::score() {

	int i = 0;
	for (const auto& it: players) {

		std::cout << "Player " << i << std::endl;
		it->printScore();
		i++;
	}
}

void Game::play() {

	initPlayers();
	getDeck();

	for (int rund=0; rund<NUM_ROUNDS; rund++) {

		std::cout << "=====================================" << std::endl;
		std::cout << "ROUND " << rund << std::endl;

		dealRound(rund);

		for (int turn = 0; turn < NUM_CARDS - 1; turn++) {
			for (const auto& it: players) {
				it->playTurn(rund);
			}
		}

		for (const auto& it: players) {
			it->updateMilitaryPoints(rund);
		}

		std::cout << "=====================================" << std::endl;
	}

	score();
}


