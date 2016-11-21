#include "Game.h"

Game::Game(): {}

Game::~Game() {}

void Game::getResourceCards(int minPlayers) {

	std::string type = "Resource";
	int cost = 0;
	firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("lumberYard", cost, age, 1, 0, 0, 0, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("stonePit", cost, age, 0, 1, 0, 0, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("clayPool", cost, age, 0, 0, 1, 0, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("oreVein", cost, age, 0, 0, 0, 1, minPlayers));

	cost = 1;
	int age = 2;

	secondAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("sawmill", cost, age, 2, 0, 0, 0, minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("quarry", cost, age, 0, 2, 0, 0, minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("brickyard", cost, age, 0, 0, 2, 0, minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("foundry", cost, age, 0, 0, 0, 2, minPlayers));

	int either_or = 1;
	age = 1;

	firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("clayPit", cost, age, 0, 0, 1, 1, either_or, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("timberYard", cost, age, 1, 1, 0, 0, either_or, minPlayers));	

	if (minPlayers > 3) {
		firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("excavation", cost, age, 0, 1, 0, 1, either_or, minPlayers));
	}

	if (minPlayers > 4) {
		firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("forestCave", cost, age, 1, 0, 0, 1, either_or, minPlayers));
	}

	if (minPlayers > 5) {
		firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("mine", cost, age, 0, 1, 0, 1, either_or, minPlayers));
		firstAgeDeck.push_back(std::unique_ptr<ResourceCard>(new ResourceCard("treeFarm", cost, age, 1, 0, 1, 0, either_or, minPlayers));
	}
}

void Game::getBlueCards(int minPlayers) {

	int points = 2;

	firstAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("altar", points, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("theater", points, minPlayers));

	points = 3;
	firstAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("baths", 0, 1, 0, 0, points, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("temple", 0, 1, 0, 0, 1, 0, 0, points, minPlayers));

	points = 4;
	secondAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("statue", 1, 0, 0, 2, points, minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("courthouse", 0, 0, 2, 0, 0, 1, 0, points, minPlayers));

	points = 5;
	secondAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("aqueduct", 0, 3, 0, 0, points, minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("gardens", 1, 0, 2, 0, points, minPlayers));

	points = 6;
	thirdAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9  points, minPlayers));
	thirdAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("senate", 2, 1, 0, 1, points, minPlayers));

	points = 7;
	thirdAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("pantheon", 0, 0, 2, 1, 1, 1, 1, points, minPlayers));

	points = 8;
	thirdAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("palace", 1, 1, 1, 1, 1, 1, 1, points, minPlayers));

	if (minPlayers > 3)
		thirdAgeDeck.push_back(std::unique_ptr<BlueCard>(new BlueCard("pawnshop", 0, 1, 0, 0, points, minPlayers));
}

void Game::getMilitaryCards(int minPlayers) {

	int age = 1;

	firstAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("stockade", 1, 0, 0, 0, age, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("barracks", 0, 0, 0, 1, age, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("guardTower", 0, 0, 1, 0, age,  minPlayers));

	int age = 2, 

	secondAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("walls", 0, 3, 0, 0, age,  minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("stables", 1, 0, 1, 1, age, minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("archeryRange", 2, 0, 0, 1, age, minPlayers));

	int age = 3;

	thirdAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("fortifications", 0, 1, 0, 3, age,  minPlayers));
	thirdAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, minPlayers));
	thirdAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("siegeWorkshop", 1, 3, 0, 0, age, minPlayers));


	if (minPlayers > 3) {
		secondAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("trainingGround", 1, 0, 0, 2, 2,  minPlayers));
		thirdAgeDeck.push_back(std::unique_ptr<MilitaryCard>(new MilitaryCard("circus", 0, 3, 0, 1, 3,  minPlayers));
	}
}

void Game::getScienceCards(int minPlayers) {

	int age = 1;

	firstAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 1, 0, "A", age, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("workshop", 1, 0, 0, "wheel", age, minPlayers));
	firstAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("scriptorium", 0, 0, 1, "tablet", age, minPlayers));

	int age = 2, 

	secondAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 0, 0, 2, 1, 0, 8, "A", age, minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1, "wheel", age, minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0, "tablet", age, minPlayers));
	secondAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1, "tablet", age, minPlayers));

	int age = 3;

	thirdAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 0, 0, 2, 1, 0, 8, "A", age, minPlayers));
	thirdAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1, "wheel", age, minPlayers));
	thirdAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0, "tablet", age, minPlayers));
	thirdAgeDeck.push_back(std::unique_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1, "tablet", age, minPlayers));

}

void Game::getDeck(int minPlayers) {

	getResourceCards(minPlayers));
	getBlueCards(minPlayers));
	getMilitaryCards(minPlayers));
	getScienceCards(minPlayers));

	// TODO: add other types of cards. 
}

std::vector<Card> Game::shuffle(std::vector<Card> deck) {

	std::vector<Card> newDeck;
	int index:
	for (int i = 0; i < deck.length(); i++) {
		index = randomIndex(deck);
		newDeck.push_back(deck.at(index));
		deck.remove(index);
	}

	return newDeck;
}

void Game::dealRound(int rund) {

	std::vector<Card> deck;

	if (rund == 0)
		deck = firstAgeDeck;
	if (rund == 1)
		deck = secondAgeDeck;
	else
		deck = thirdAgeDeck;

	deck = shuffle(deck);
	int numCards = deck.length() / numPlayers;

	for (const auto& it: players) {
		for (int i=0; i<numPlayers; i++)  {
			Card current = deck.pop(); 
			it.addToHand(current);
		}
	}
}

void Game::initPlayers() {

	for (int i=0; i<numPlayers; i++) {
		players.push_back(std::unique_ptr<ResourceCard>(new Player())
		playerAt(i).setStrategy(arg.strategyAt(i));
	}

	playerAt(0).setLeft(playerAt(numPlayers - 1));
	playerAt(0).setRight(playerAt(1));
	playerAt(numPlayers - 1).setLeft(playerAt(numPlayers - 2));
	playerAt(numPlayers - 1).setRight(playerAt(0));

	for (int i=1; i<numPlayers - 1; i++) {
		playerAt(i).setLeft(playerAt(i-1));
		playerAt(i).setRight(playerAt(i+1));
	}
}

void Game::play(int rund) {

	initPlayers();

	for (int i=0; i<NUM_ROUNDS; i++) {

		dealRound(rund);
		for (const auto& it: players) 
			it.playTurn(rund);
	}


