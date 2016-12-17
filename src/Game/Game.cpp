#include "../../include/game/Game.h"
#include "../../include/cards/BlueCard.h"
#include "../../include/cards/MilitaryCard.h"
#include "../../include/cards/ResourceCard.h"
#include "../../include/cards/ScienceCard.h"
#include "../../include/cards/GuildCard.h"
#include "../../include/Constants.h"

#include <iostream>
#include <string>
#include <map>
#define PRINT 1


Game::Game(std::shared_ptr<ArgProcessor> args_pointer) : args(args_pointer) {

	for (int i = 0; i < 3; i++) {
		decks.push_back(std::shared_ptr<Deck>(new Deck()));
	}
	numPlayers = args_pointer->getNumPlayers();
}

Game::~Game() {}


void Game::getWonders() {

	if (args->wonderSide == "A") {
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("OlympiaA", 1, 0, 0, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("GizahA", 0, 1, 0, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("BabylonA", 0, 0, 1, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("RhodosA", 0, 0, 0, 1)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("AlexandriaA", 1, 0, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("HalikarnassosA", 0, 1, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("EphesosA", 0, 0, 1)));

	} else {
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("OlympiaB", 1, 0, 0, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("GizahB", 0, 1, 0, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("BabylonB", 0, 0, 1, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("RhodosB", 0, 0, 0, 1)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("AlexandriaB", 1, 0, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("HalikarnassosB", 0, 1, 0)));
		wonders.push_back(std::shared_ptr<Wonder>(new Wonder("EphesosB", 0, 0, 1)));
	}
}

void Game::dealWonders() {

	// TODO: make this random
	int i = 0;
	for (const auto& player: players) {
		player->setWonder(wonders.at(i));
		i += 1;
	}
}

void Game::getResourceCards() {

	int gold = 0;
	int age= 1;
	int minPlayers = 3;
		
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("lumberYard", 1, 0, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("stonePit", 0, 1, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("clayPool", 0, 0, 1, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("oreVein", 0, 0, 0, 1, age, gold, minPlayers)));


	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("glassworks", 1, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("loom", 0, 1, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("press", 0, 0, 1, age, gold, minPlayers)));

	minPlayers = 4;
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("oreVein", 0, 0, 0, 1, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("lumberYard", 1, 0, 0, 0, age, gold, minPlayers)));

	minPlayers = 5;
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("clayPool", 0, 0, 1, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("stonePit", 0, 1, 0, 0, age, gold, minPlayers)));

	minPlayers = 6;
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("glassworks", 1, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("loom", 0, 1, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("press", 0, 0, 1, age, gold, minPlayers)));

	gold = 1;
	age = 2;
	minPlayers = 3;

	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("sawmill", 2, 0, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("quarry", 0, 2, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("brickyard", 0, 0, 2, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("foundry", 0, 0, 0, 2, age, gold, minPlayers)));

	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("glassworks", 1, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("loom", 0, 1, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("press", 0, 0, 1, age, gold, minPlayers)));

	minPlayers = 4;

	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("sawmill", 2, 0, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("quarry", 0, 2, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("brickyard", 0, 0, 2, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("foundry", 0, 0, 0, 2, age, gold, minPlayers)));

	minPlayers = 5;

	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("glassworks", 1, 0, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("loom", 0, 1, 0, age, gold, minPlayers)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("press", 0, 0, 1, age, gold, minPlayers)));

	int either_or = 1;
	age = 1;
	minPlayers = 3;

	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("clayPit", 0, 0, 1, 1, age, gold, minPlayers, either_or)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("timberYard", 1, 1, 0, 0, age, gold, minPlayers, either_or)));	

	minPlayers = 4;
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("excavation", 0, 1, 0, 1, age, gold, minPlayers, either_or)));

	minPlayers = 5;
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("forestCave", 1, 0, 0, 1, age, gold, minPlayers, either_or)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("timberYard", 1, 1, 0, 0, age, gold, minPlayers, either_or)));	

	minPlayers = 6;
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("mine", 0, 1, 0, 1, age, gold, minPlayers, either_or)));
	decks.at(age)->addResourceCard(std::shared_ptr<ResourceCard>(new ResourceCard("treeFarm", 1, 0, 1, 0, age, gold, minPlayers, either_or)));
}

void Game::getBlueCards() {


	// FIRST AGE
	int age = 1;
	int points = 2;
	int minPlayers = 3;

	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("altar", "temple", age, minPlayers, points)));
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("theater", "statue", age, minPlayers, points)));

	points = 3;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("baths", "aqueduct", 0, 1, 0, 0, age, minPlayers, points)));

	minPlayers = 4;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("pawnshop", 0, 1, 0, 0, age, minPlayers, points)));

	minPlayers = 5;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("altar", "temple", age, minPlayers, points)));

	minPlayers = 6;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("theater", "statue", age, minPlayers, points)));

	minPlayers = 7;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("baths", "aqueduct", 0, 1, 0, 0, age, minPlayers, points)));
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("pawnshop", 0, 1, 0, 0, age, minPlayers, points)));


	// SECOND AGE
	age = 2;
	minPlayers = 3;
	points = 4;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("temple", "pantheon", 0, 1, 0, 0, 1, 0, 0, age, minPlayers, points)));
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("statue", "gardens", 1, 0, 0, 2, age, minPlayers, points)));
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("courthouse", 0, 0, 2, 0, 0, 1, 0, age, minPlayers, points)));

	points = 5;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("aqueduct", 0, 3, 0, 0, age, minPlayers, points)));

	minPlayers = 5;
	points = 4;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("courthouse", 0, 0, 2, 0, 0, 1, 0, age, minPlayers, points)));

	minPlayers = 6;
	points = 5;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("aqueduct", 0, 3, 0, 0, age, minPlayers, points)));

	minPlayers = 7;
	points = 4;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("statue", "gardens", 1, 0, 0, 2, age, minPlayers, points)));

	// THIRD AGE
	age = 2;
	minPlayers = 3;

	points = 5;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("gardens", 1, 0, 2, 0, age, minPlayers, points)));

	points = 6;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9, age, minPlayers, points)));
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("senate", 2, 1, 0, 1, age, minPlayers, points)));

	points = 7;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("pantheon", 0, 0, 2, 1, 1, 1, 1, age, minPlayers, points)));

	points = 8;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("palace", 1, 1, 1, 1, 1, 1, 1, age, minPlayers, points)));

	minPlayers = 4;
	points = 5;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("gardens", 1, 0, 2, 0, age, minPlayers, points)));

	minPlayers = 5;
	points = 6;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9, age, minPlayers, points)));
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("senate", 2, 1, 0, 1, age, minPlayers, points)));

	minPlayers = 6;
	points = 6;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("townHall", 0, 2, 0, 1, 1, 9, 9, age, minPlayers, points)));
	points = 7;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("pantheon", 0, 0, 2, 1, 1, 1, 1, age, minPlayers, points)));

	minPlayers = 7;
	points = 8;
	decks.at(age)->addBlueCard(std::shared_ptr<BlueCard>(new BlueCard("palace", 1, 1, 1, 1, 1, 1, 1, age, minPlayers, points)));
}

void Game::getMilitaryCards() {

	// FIRST AGE
	int age = 1;
	int minPlayers = 3;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("stockade", 1, 0, 0, 0, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("barracks", 0, 0, 0, 1, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("guardTower", 0, 0, 1, 0, age, minPlayers)));

	minPlayers = 4;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("guardTower", 0, 0, 1, 0, age, minPlayers)));

	minPlayers = 5;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("barracks", 0, 0, 0, 1, age, minPlayers)));

	minPlayers = 7;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("stockade", 1, 0, 0, 0, age, minPlayers)));

	// SECOND AGE
	age = 2, 
	minPlayers = 3;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("walls", "fortifications", 0, 3, 0, 0, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("stables", 1, 0, 1, 1, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("archeryRange", 2, 0, 0, 1, age, minPlayers)));

	minPlayers = 4;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("trainingGround", "circus", 1, 0, 0, 2, age, minPlayers)));

	minPlayers = 5;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("stables", 1, 0, 1, 1, age, minPlayers)));

	minPlayers = 6;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("archeryRange", 2, 0, 0, 1, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("trainingGround",  "circus", 1, 0, 0, 2, age, minPlayers)));

	minPlayers = 7;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("walls", "fortifications", 0, 3, 0, 0, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("trainingGround", "circus", 1, 0, 0, 2, age, minPlayers)));

	// THIRD AGE
	age = 2;
	minPlayers = 3;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("fortifications", 0, 1, 0, 3, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("siegeWorkshop", 1, 3, 0, 0, age, minPlayers)));

	minPlayers = 4;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("circus", 0, 3, 0, 1, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, minPlayers)));

	minPlayers = 5;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("siegeWorkshop", 1, 3, 0, 0, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("circus", 0, 3, 0, 1, age, minPlayers)));

	minPlayers = 6;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("circus", 0, 3, 0, 1, age, minPlayers)));

	minPlayers = 7;
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("arsenal", 2, 0, 0, 1, 0, 1, 0, age, minPlayers)));
	decks.at(age)->addMilitaryCard(std::shared_ptr<MilitaryCard>(new MilitaryCard("fortifications", 0, 1, 0, 3, age, minPlayers)));
}

void Game::getScienceCards() {

	// FIRST AGE
	int age = 0;
	int minPlayers = 3;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 1, 0, "dispensary", "stables", age, minPlayers, "A")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("workshop", 1, 0, 0, "laboratory", "archery range", age, minPlayers, "wheel")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("scriptorium", 0, 0, 1, "courthouse", "library", age, minPlayers, "tablet")));

	minPlayers = 4;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("scriptorium", 0, 0, 1, "courthouse", "library", age, minPlayers, "tablet")));

	minPlayers = 5;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("apothecary", 0, 1, 0, "dispensary", "stables", age, minPlayers, "A")));

	minPlayers = 7;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("workshop", 1, 0, 0, "laboratory", "archery range", age, minPlayers, "wheel")));

	// SECOND AGE
	age = 1, 
	minPlayers = 3;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("dispensary", 0, 0, 0, 2, 1, 0, 8, "lodge", "arena", age, minPlayers, "A")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1, "observatory", "siegeWorkshop", age, minPlayers, "wheel")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0, "senate", "university", age, minPlayers, "tablet")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1, "academy", "study", age, minPlayers, "tablet")));

	minPlayers = 4;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("dispensary", 0, 0, 0, 2, 1, 0, 8, "lodge", "arena", age, minPlayers, "A")));

	minPlayers = 5;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("laboratory", 0, 0, 2, 0, 0, 0, 1, "observatory", "siegeWorkshop", age, minPlayers, "wheel")));

	minPlayers = 6;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("library", 0, 2, 0, 0, 0, 1, 0, "senate", "university", age, minPlayers, "tablet")));

	minPlayers = 7;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("school", 1, 0, 0, 0, 0, 0, 1, "academy", "study", age, minPlayers, "tablet")));

	// THIRD AGE
	age = 2;
	minPlayers = 3;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("university", 0, 0, 2, 0, 1, 0, 1,  age, minPlayers, "tablet")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("study", 1, 0, 0, 0, 0, 1, 1,  age, minPlayers, "wheel")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("lodge", 0, 0, 2, 0, 0, 1, 1,  age, minPlayers, "A")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("observatory", 0, 0, 0, 2, 1, 1, 0,  age, minPlayers, "wheel")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("academy", 0, 3, 0, 0, 1, 0, 0, age, minPlayers, "A")));

	minPlayers = 4;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("university", 0, 0, 2, 0, 1, 0, 1,  age, minPlayers, "tablet")));

	minPlayers = 5;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("study", 1, 0, 0, 0, 0, 1, 1,  age, minPlayers, "wheel")));

	minPlayers = 6;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("lodge", 0, 0, 2, 0, 0, 1, 1,  age, minPlayers, "A")));

	minPlayers = 7;
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("observatory", 0, 0, 0, 2, 1, 1, 0,  age, minPlayers, "wheel")));
	decks.at(age)->addScienceCard(std::shared_ptr<ScienceCard>(new ScienceCard("academy", 0, 3, 0, 0, 1, 0, 0, age, minPlayers, "A")));
}


void Game::getGuildCards() {

	int minPlayers = 3;
	int age = 2;

	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("magistratesGuild", 3, 1, 0, 0, 0, 1, 0, age, minPlayers)));
	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("shipownersGuild", 3, 0, 0, 0, 1, 0, 1, age, minPlayers)));
	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("spiesGuild", 0, 0, 3, 0, 1, 0, 0, age, minPlayers)));
	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("buildersGuild", 0, 2, 2, 0, 1, 0, 0, age, minPlayers)));
	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("scientistsGuild", 0, 0, 2, 2, 0, 0, 1, age, minPlayers)));
	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("tradersGuild", 0, 0, 0, 0, 1, 1, 1, age, minPlayers)));
	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("craftsmensGuild", 0, 0, 0, 0, 1, 1, 1, age, minPlayers)));
	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("strategiesGuild", 0, 1, 0, 2, 0, 1, 0, age, minPlayers)));
	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("philosophersGuild", 0, 0, 3, 0, 0, 1, 1, age, minPlayers)));
	decks.at(age)->addGuildCard(std::shared_ptr<GuildCard>(new GuildCard("workersGuild", 1, 1, 1, 2, 0, 0, 0, age, minPlayers)));
}

void Game::getEconomyCards() {

	int age = 0;
	int minPlayers = 3;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("eastTradingPost", "forum",  age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("westTradingPost", "forum", age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("marketPlace", "caravansery", age, minPlayers)));	

	minPlayers = 4;

	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("tavern", age, minPlayers)));	

	minPlayers = 5;

	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("tavern", age, minPlayers)));	
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("marketPlace", age, minPlayers)));

	minPlayers = 6;

	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("marketPlace", age, minPlayers)));

	minPlayers = 7;

	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("tavern", age, minPlayers)));	
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("eastTradingPost", age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("westTradingPost", age, minPlayers)));

	age = 1;
	minPlayers = 3;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("caravansery", 2, 0, 0, 0, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("forum", 2, 0, 0, 0, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("vineyard", age, minPlayers)));

	minPlayers = 4;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("bazar", age, minPlayers)));


	minPlayers = 5;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("caravansery", 2, 0, 0, 0, age, minPlayers)));

	minPlayers = 6;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("caravansery", 2, 0, 0, 0, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("forum", 2, 0, 0, 0, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("vineyard", age, minPlayers)));

	minPlayers = 7;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("forum", 2, 0, 0, 0, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("bazar", age, minPlayers)));

	age = 2; 

	minPlayers = 3;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("arena", 0, 2, 0, 1, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("lighthouse", 0, 1, 0, 0, 1, 0, 0, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("haven", 1, 0, 0, 1, 0, 1, 0, age, minPlayers)));

	minPlayers = 4;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("chamberOfCommerce", 0, 0, 2, 0, 0, 0, 1, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("haven", 1, 0, 0, 1, 0, 1, 0, age, minPlayers)));


	minPlayers = 5;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("arena", 0, 2, 0, 1, age, minPlayers)));

	minPlayers = 6;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("caravansery", 2, 0, 0, 0, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("lighthouse", 0, 1, 0, 0, 1, 0, 0, age, minPlayers)));

	minPlayers = 7;
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("arena", 0, 2, 0, 1, age, minPlayers)));
	decks.at(age)->addEconomyCard(std::shared_ptr<EconomyCard>(new EconomyCard("chamberOfCommerce", 0, 0, 2, 0, 0, 0, 1, age, minPlayers)));

}

void Game::getDeck() {

	getResourceCards();
	getBlueCards();
	getMilitaryCards();
	getScienceCards();
	getGuildCards();
	getEconomyCards();

	// TODO: add other types of cards. 

	for (int i = 0; i < 3; i++) {
		decks.at(i)->filterForNumPlayers(numPlayers);
		if (PRINT == 1)
			decks.at(i)->print();
	}
}

void Game::dealRound(int rund) {

	for (const auto& player: players) {
		for (int i=0; i<NUM_CARDS; i++)  {
			player->addRandomCardToHand(decks.at(rund), rund);
		}
	}
}

std::shared_ptr<Player> Game::playerAt(int i) {
	return players.at(i);
}

void Game::initPlayers() {

	int numPlayers = args->getNumPlayers();
	for (int i=0; i<numPlayers; i++) 
		players.push_back(std::shared_ptr<Player>(new Player(i, args->getResourceWeight(), args->getResourceConstant())));
	
	playerAt(0)->setLeft(playerAt(numPlayers - 1));
	playerAt(0)->setRight(playerAt(1));
	playerAt(numPlayers - 1)->setLeft(playerAt(numPlayers - 2));
	playerAt(numPlayers - 1)->setRight(playerAt(0));

	for (int i=1; i<numPlayers - 1; i++) {
		playerAt(i)->setLeft(playerAt(i-1));
		playerAt(i)->setRight(playerAt(i+1));
	}
}

void Game::printScore() {

	int i = 0;
	for (const auto& it: players) {

		if (PRINT == 1) {
			std::cout << "==============================" << std::endl;
			std::cout << "Player " << i << std::endl;
			it->printScore();
		}

		i++;
	}
}

std::shared_ptr<Score> Game::play() {

	initPlayers();
	getDeck();
	getWonders();
	dealWonders();
	std::shared_ptr<Score> score(new Score());

	for (int rund=0; rund<NUM_ROUNDS; rund++) {

		if (PRINT) {
			std::cout << "=====================================" << std::endl;
			std::cout << "ROUND " << rund << std::endl;
		}

		dealRound(rund);

		for (int turn = 0; turn < NUM_CARDS - 1; turn++) {

			if (PRINT) {
				std::cout << "=====================================" << std::endl;
				std::cout << "TURN " << turn << std::endl << std::endl;
			}

			int i = 0;
			for (const auto& it: players) {

				if (PRINT)
					std::cout << "PLAYER " << i << std::endl;
				it->playTurn(rund);
				i++;
				if (PRINT)
					std::cout << std::endl;
			}
		}

		for (const auto& it: players) {
			it->updateMilitaryPoints(rund);
		}

		if (PRINT)
			std::cout << "=====================================" << std::endl;
	}

	for (const auto& it: players) {
		score->addPlayer(it);
	}

	if (PRINT == 1)
		printScore();

	return score;
}


