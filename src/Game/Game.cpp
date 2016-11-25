#include "../../include/game/Game.h"
#include "../../include/cards/BlueCard.h"
#include "../../include/cards/MilitaryCard.h"
#include "../../include/cards/ResourceCard.h"
#include "../../include/cards/ScienceCard.h"
#include "../../include/Constants.h"

#include <iostream>


Game::Game(std::shared_ptr<ArgProcessor> args_pointer) : args(args_pointer) {
	int numPlayers = args_pointer->getNumPlayers();
	minPlayers = 3;
	if (numPlayers > 3)
		minPlayers = 4;
	if (numPlayers > 4)
		minPlayers = 5;
	if (numPlayers > 5)
		minPlayers = 6;
}

Game::~Game() {}

void Game::getResourceCards() {

	std::string type = "Resource";
	int gold = 0;
	int age= 1;
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("lumberYard", 1, 0, 0, 0, age, gold, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("stonePit", 0, 1, 0, 0, age, gold, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("clayPool", 0, 0, 1, 0, age, gold, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("oreVein", 0, 0, 0, 1, age, gold, minPlayers)));

	gold = 1;
	age = 2;

	secondAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("sawmill", 2, 0, 0, 0, age, gold, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("quarry", 0, 2, 0, 0, age, gold, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("brickyard", 0, 0, 2, 0, age, gold, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("foundry", 0, 0, 0, 2, age, gold, minPlayers)));

	int either_or = 1;
	age = 1;

	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("clayPit", 0, 0, 1, 1, age, gold, minPlayers, either_or)));
	firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("timberYard", 1, 1, 0, 0, age, gold, minPlayers, either_or)));	

	if (minPlayers > 3) {
		firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("excavation", 0, 1, 0, 1, age, gold, minPlayers, either_or)));
	}

	if (minPlayers > 4) {
		firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("forestCave", 1, 0, 0, 1, age, gold, minPlayers, either_or)));
	}

	if (minPlayers > 5) {
		firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("mine", 0, 1, 0, 1, age, gold, minPlayers, either_or)));
		firstAgeDeck.push_back(std::shared_ptr<ResourceCard>(new ResourceCard("treeFarm", 1, 0, 1, 0, age, gold, minPlayers, either_or)));
	}
}

void Game::getBlueCards() {

	int age = 1;
	int points = 2;


	firstAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("altar", age, minPlayers, points)));
	firstAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("theater", age, minPlayers, points)));

	points = 3;
	firstAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("baths", 0, 1, 0, 0, age, minPlayers, points)));
	firstAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("temple", 0, 1, 0, 0, 1, 0, 0, age, minPlayers, points)));

	age = 2;
	points = 4;
	secondAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("statue", 1, 0, 0, 2, age, minPlayers, points)));
	secondAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("courthouse", 0, 0, 2, 0, 0, 1, 0, age, minPlayers, points)));

	points = 5;
	secondAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("aqueduct", 0, 3, 0, 0, age, minPlayers, points)));
	secondAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("gardens", 1, 0, 2, 0, age, minPlayers, points)));

	age = 3;
	points = 6;
	thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9, age, minPlayers, points)));
	thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("senate", 2, 1, 0, 1, age, minPlayers, points)));

	points = 7;
	thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("pantheon", 0, 0, 2, 1, 1, 1, 1, age, minPlayers, points)));

	points = 8;
	thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("palace", 1, 1, 1, 1, 1, 1, 1, age, minPlayers, points)));

	if (minPlayers > 3)
		thirdAgeDeck.push_back(std::shared_ptr<BlueCard>(new BlueCard("pawnshop", 0, 1, 0, 0, age, minPlayers, points)));
}

void Game::getMilitaryCards() {

	int age = 1;

	firstAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("stockade", 1, 0, 0, 0, age, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("barracks", 0, 0, 0, 1, age, minPlayers)));
	firstAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("guardTower", 0, 0, 1, 0, age, minPlayers)));

	age = 2, 

	secondAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("walls", 0, 3, 0, 0, age, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("stables", 1, 0, 1, 1, age, minPlayers)));
	secondAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("archeryRange", 2, 0, 0, 1, age, minPlayers)));

	age = 3;

	thirdAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("fortifications", 0, 1, 0, 3, age, minPlayers)));
	thirdAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, minPlayers)));
	thirdAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("siegeWorkshop", 1, 3, 0, 0, age, minPlayers)));


	if (minPlayers > 3) {
		age = 2;
		secondAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("trainingGround", 1, 0, 0, 2, age, minPlayers)));
		age = 3;
		thirdAgeDeck.push_back(std::shared_ptr<MilitaryCard>(new MilitaryCard("circus", 0, 3, 0, 1, age, minPlayers)));
	}
}

void Game::getScienceCards() {

	int age = 1;

	firstAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 1, 0, age, minPlayers, "A")));
	firstAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("workshop", 1, 0, 0, age, minPlayers, "wheel")));
	firstAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("scriptorium", 0, 0, 1, age, minPlayers, "tablet")));

	age = 2, 

	secondAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 0, 0, 2, 1, 0, 8, age, minPlayers, "A")));
	secondAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1,  age, minPlayers, "wheel")));
	secondAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0,  age, minPlayers, "tablet")));
	secondAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1,  age, minPlayers, "tablet")));

	age = 3;

	thirdAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 0, 0, 2, 1, 0, 8, age, minPlayers, "A")));
	thirdAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1,  age, minPlayers, "A")));
	thirdAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0,  age, minPlayers, "A")));
	thirdAgeDeck.push_back(std::shared_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1,  age, minPlayers, "A")));

}

void Game::getDeck() {

	for (int i = 0; i < 3; i++) {
		getResourceCards();
		getBlueCards();
		getMilitaryCards();
		getScienceCards();
	}
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
	numCards = deck.size() / numPlayers;

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
	for (int i=0; i<numPlayers; i++) 
		players.push_back(std::shared_ptr<Player>(new Player()));
	
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
	}
}

void Game::play() {

	initPlayers();
	getDeck();

	for (int rund=0; rund<NUM_ROUNDS; rund++) {

		dealRound(rund);
		for (const auto& it: players) {
			it->setStrategy(rund);
		}

		for (int turn = 0; turn < numCards - 1; turn++) {
			for (const auto& it: players) 
				it->playTurn(rund);
		}

		for (const auto& it: players) {
			it->updateMilitaryPoints(rund);
		}
	}

	score();
}


