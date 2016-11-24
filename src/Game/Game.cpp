#include "../../include/game/Game.h"
#include "../../include/cards/BlueCard.h"
#include "../../include/cards/MilitaryCard.h"
#include "../../include/cards/ResourceCard.h"
#include "../../include/cards/ScienceCard.h"


Game::Game(std::shared_ptr<ArgProcessor> args_pointer) : args(args_pointer) {}

Game::~Game() {}

void Game::getResourceCards(int minPlayers) {

	std::string type = "Resource";
	int cost = 0;
	int age= 1;
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("lumberYard", age, cost, 1, 0, 0, 0, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("stonePit", age, cost, 0, 1, 0, 0, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("clayPool", age, cost, 0, 0, 1, 0, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("oreVein", age, cost, 0, 0, 0, 1, minPlayers)));

	cost = 1;
	age = 2;

	secondAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("sawmill", age, cost, 2, 0, 0, 0, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("quarry", age, cost, 0, 2, 0, 0, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("brickyard", age, cost, 0, 0, 2, 0, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("foundry", age, cost, 0, 0, 0, 2, minPlayers)));

	int either_or = 1;
	age = 1;

	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("clayPit", age, cost, 0, 0, 1, 1, either_or, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("timberYard", age, cost, 1, 1, 0, 0, either_or, minPlayers)));	

	if (minPlayers > 3) {
		firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("excavation", age, cost, 0, 1, 0, 1, either_or, minPlayers)));
	}

	if (minPlayers > 4) {
		firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("forestCave", age, cost, 1, 0, 0, 1, either_or, minPlayers)));
	}

	if (minPlayers > 5) {
		firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("mine", age, cost, 0, 1, 0, 1, either_or, minPlayers)));
		firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("treeFarm", age, cost, 1, 0, 1, 0, either_or, minPlayers)));
	}
}

void Game::getBlueCards(int minPlayers) {

	int age = 1;
	int points = 2;


	firstAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("altar", age, points, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("theater", age, points, minPlayers)));

	points = 3;
	firstAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("baths", 0, 1, 0, 0, age, points, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("temple", 0, 1, 0, 0, 1, 0, 0, age, points, minPlayers)));

	age = 2;
	points = 4;
	secondAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("statue", 1, 0, 0, 2, age, points, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("courthouse", 0, 0, 2, 0, 0, 1, 0, age, points, minPlayers)));

	points = 5;
	secondAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("aqueduct", 0, 3, 0, 0, age, points, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("gardens", 1, 0, 2, 0, age, points, minPlayers)));

	age = 3;
	points = 6;
	thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9, age, points, minPlayers)));
	thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("senate", 2, 1, 0, 1, age, points, minPlayers)));

	points = 7;
	thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("pantheon", 0, 0, 2, 1, 1, 1, 1, age, points, minPlayers)));

	points = 8;
	thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("palace", 1, 1, 1, 1, 1, 1, 1, age, points, minPlayers)));

	if (minPlayers > 3)
		thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("pawnshop", 0, 1, 0, 0, age, points, minPlayers)));
}

void Game::getMilitaryCards(int minPlayers) {

	int age = 1;
	int cost = 0;

	firstAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("stockade", 1, 0, 0, 0, age, cost, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("barracks", 0, 0, 0, 1, age, cost, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("guardTower", 0, 0, 1, 0, age, cost, minPlayers)));

	age = 2, 

	secondAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("walls", 0, 3, 0, 0, age, cost, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("stables", 1, 0, 1, 1, age, cost, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("archeryRange", 2, 0, 0, 1, age, cost, minPlayers)));

	age = 3;

	thirdAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("fortifications", 0, 1, 0, 3, age, cost, minPlayers)));
	thirdAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, cost, minPlayers)));
	thirdAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("siegeWorkshop", 1, 3, 0, 0, age, cost, minPlayers)));


	if (minPlayers > 3) {
		secondAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("trainingGround", 1, 0, 0, 2, 2, cost,  minPlayers)));
		thirdAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("circus", 0, 3, 0, 1, 3, cost, minPlayers)));
	}
}

void Game::getScienceCards(int minPlayers) {

	int age = 1;
	int cost = 0;

	firstAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 1, 0, "A", age, cost, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("workshop", 1, 0, 0, "wheel", age, cost, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("scriptorium", 0, 0, 1, "tablet", age, cost, minPlayers)));

	age = 2, 

	secondAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 0, 0, 2, 1, 0, 8, "A", age, cost, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1, "wheel", age, cost, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0, "tablet", age, cost, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1, "tablet", age, cost, minPlayers)));

	age = 3;

	thirdAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 0, 0, 2, 1, 0, 8, "A", age, cost, minPlayers)));
	thirdAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1, "wheel", age, cost, minPlayers)));
	thirdAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0, "tablet", age, cost, minPlayers)));
	thirdAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1, "tablet", age, cost, minPlayers)));

}

void Game::getDeck(int minPlayers) {

	getResourceCards(minPlayers);
	getBlueCards(minPlayers);
	getMilitaryCards(minPlayers);
	getScienceCards(minPlayers);

	// TODO: add other types of cards. 
}

std::vector<std::shared_ptr<Card>> Game::shuffle(std::vector<std::shared_ptr<Card>> deck) {

	std::vector<std::shared_ptr<Card>> newDeck;
	int index;
	for (int i = 0; i < deck.size(); i++) {
		index = randomIndex(deck);
		newDeck.push_back(deck.at(index));
		deck.erase(deck.begin() + index);
	}

	return newDeck;
}

void Game::dealRound(int rund) {

	std::vector<std::shared_ptr<Card>> deck;

	if (rund == 0)
		deck = firstAgeDeck;
	if (rund == 1)
		deck = secondAgeDeck;
	else
		deck = thirdAgeDeck;

	deck = shuffle(deck);
	int numPlayers = args->getNumPlayers();
	int numCards = deck.size() / numPlayers;

	for (const auto& it: players) {
		for (int i=0; i<numCards; i++)  {
			std::shared_ptr<Card> current = deck.at(deck.size() - 1);
			deck.pop_back(); 
			it->addToHand(current);
		}
	}
}

std::shared_ptr<Player> Game::playerAt(int i) {
	return players.at(i);
}

void Game::initPlayers() {

	int numPlayers = args->getNumPlayers();
	for (int i=0; i<numPlayers; i++) {
		players.push_back(std::shared_ptr<Player>(new Player()));
		playerAt(i)->setStrategy(args->strategyAt(i));
	}

	playerAt(0)->setLeft(playerAt(numPlayers - 1));
	playerAt(0)->setRight(playerAt(1));
	playerAt(numPlayers - 1)->setLeft(playerAt(numPlayers - 2));
	playerAt(numPlayers - 1)->setRight(playerAt(0));

	for (int i=1; i<numPlayers - 1; i++) {
		playerAt(i)->setLeft(playerAt(i-1));
		playerAt(i)->setRight(playerAt(i+1));
	}
}

void Game::play() {

	initPlayers();

	for (int i=0; i<NUM_ROUNDS; i++) {

		dealRound(i);
		for (const auto& it: players) 
			it->playTurn(i);
	}
}


