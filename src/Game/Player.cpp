#include "../../include/game/Player.h"
#include <iostream>
#define PRINT 0

Player::Player(int name, double resource_weight, double resource_constant) : name(std::to_string(name)),
						   hand(std::shared_ptr<Deck>(new Deck())), 
						   affordableHand(std::shared_ptr<Deck>(new Deck())),
						   resource(std::shared_ptr<Resource>(new Resource())), 
						 
							numMilitaryCardsPlayed(0),
							numScienceCardsPlayed(0),
							numGuildCardsPlayed(0),
							numEconomyCardsPlayed(0),
							numBlueCardsPlayed(0),
							numBrownCardsPlayed(0),
							numSilverCardsPlayed(0),
							numWondersPlayed(0),
							numMinusOnes(0),

 							bluePoints(0),
 					    	guildPoints(0),
 							economyPoints(0),
 							wonderPoints(0),

							leftCost(2),
						   	rightCost(2),
						   	silverCost(2) {}
Player::~Player() {}

int Player::getMilitaryStrength() {
	return military.getStrength();
}

std::string Player::getStrategy() {
	return strategy;
}

void Player::getAffordableCards() {

	for (auto const& it: hand->getBlueCards()) {
		if (canAfford(it->getResourceCost()))
			affordableHand->addBlueCard(it);
	}

	for (auto const& it: hand->getEconomyCards()) {
		if (canAfford(it->getResourceCost()))
			affordableHand->addEconomyCard(it);
	}

	for (auto const& it: hand->getGuildCards()) {
		if (canAfford(it->getResourceCost()))
			affordableHand->addGuildCard(it);
	}

	for (auto const& it: hand->getResourceCards()) {
		if (canAfford(it->getResourceCost()))
			affordableHand->addResourceCard(it);
	}
	
	for (auto const& it: hand->getMilitaryCards()) {
		if (canAfford(it->getResourceCost()))
			affordableHand->addMilitaryCard(it);
	}

	for (auto const& it: hand->getScienceCards()) {
		if (canAfford(it->getResourceCost()))
			affordableHand->addScienceCard(it);
	}
}

double Player::getGuildValue(std::string card_name) {

	// TODO
	return 0.0;
}


double Player::getEconomyValue(std::string card_name) {

	// TODO
	return 0.0;
}

double Player::getMilitaryValue(int round) {
	int left_strength = leftNeighbor->getMilitaryStrength();
	int right_strength = rightNeighbor->getMilitaryStrength();
	return military.getValue(round, left_strength, right_strength);
}

double Player::getScienceValue(std::shared_ptr<ScienceCard> card, int round) {
	return science.getValue(card->getType(), round);
}

double Player::getBlueValue(std::shared_ptr<BlueCard> card, int round) {
	return static_cast<double>(card->getPoints());
}

double Player::getResourceCardValue(std::shared_ptr<ResourceCard> card) {

	int i = card->index;
	int number = resource->at(i);
	int neighborNumber = leftNeighbor->getResource()->resources.at(i) + rightNeighbor->getResource()->resources.at(i);
	double value = resource_constant - number + resource_weight*neighborNumber;
	return value;
}

void Player::setWonder(std::shared_ptr<Wonder> dealtWonder) {
	wonder = dealtWonder;
}

bool Player::canAffordNextWonder() {
	return canAfford(wonder->getCost(numWondersPlayed));
}

void Player::playNeighborGuildCard() {

	std::shared_ptr<GuildCard> card = nullptr;
	std::shared_ptr<GuildCard> leftGuildCard = leftNeighbor->hand->getGuildCard();
	std::shared_ptr<GuildCard> rightGuildCard = rightNeighbor->hand->getGuildCard();

	if (leftGuildCard)
		card = leftGuildCard;
	else if (rightGuildCard)
		card = rightGuildCard;

	if (card) {
		if (PRINT)
			std::cout << "playing neighbor GuildCard " << card->getName() << std::endl;
		playedCards.insert(card->getName());
		playedGuilds.insert(card->getName());
	}
}

void Player::playWonder(std::string side) {

	numWondersPlayed += 1;

	if (side == "A") {

		if (numWondersPlayed == 1)
			wonderPoints += 3;

		else if (numWondersPlayed == 3)
			wonderPoints += 7;

		else {

			if (wonder->getName() == "GizahA") 
				wonderPoints += 5;

			else if (wonder->getName() == "OlympiaA") 
					playTwoLastRound = true;

			else if (wonder->getName() == "EphesosA") 
				resource->gold += 9;

			else if (wonder->getName() == "BabylonA") 
				science.wild += 1;

			else if (wonder->getName() == "AlexandriaA") 
				resource->brownWild += 1;

			else if (wonder->getName() == "RhodosA") 
				military.strength += 2;

			else if (wonder->getName() == "HalikarnassosA") 
				playTwoLastRound = true;
		}
	}

	else if (side == "B") {

		if (wonder->getName() == "OlympiaB") {

			if (numWondersPlayed == 1) {
				leftCost = 1;
				rightCost = 1;
			}

			else if (numWondersPlayed == 2) {
				wonderPoints += 5;
			}

			else {
				playNeighborGuildCard();
			}
		}

		if (wonder->getName() == "GizahB") {

			if (numWondersPlayed == 1) 
				wonderPoints += 3;
			else if (numWondersPlayed == 2) 
				wonderPoints += 5;
			else if (numWondersPlayed == 3)
				wonderPoints += 5;
			else 
				wonderPoints += 7;
		}

		if (wonder->getName() == "EphesosB") {

			if (numWondersPlayed == 1) {
				wonderPoints += 2;
				resource->gold += 4;
			}
			else if (numWondersPlayed == 2) {
				wonderPoints += 3;
				resource->gold += 4;
			}
			else if (numWondersPlayed == 3) {
				wonderPoints += 5;
				resource->gold += 4;
			}
		}

		if (wonder->getName() == "BabylonB") {

			if (numWondersPlayed == 1) {
				wonderPoints += 3;			}
			else if (numWondersPlayed == 2) {
				playTwoLastRound = true;
			}
		}

		if (wonder->getName() == "AlexandriaB") {

			if (numWondersPlayed == 1)
				resource->brownWild += 1;
			else if (numWondersPlayed == 2)
				science.wild += 1;
			else if (numWondersPlayed == 3)
				wonderPoints += 7;

		}

		if (wonder->getName() == "HalikarnassosB") {

			if (numWondersPlayed == 1) {
				wonderPoints += 2;
				playTwoLastRound = true;
			}

			else if (numWondersPlayed == 2) {
				wonderPoints += 1;
				playTwoLastRound = true;
			}

			else if (numWondersPlayed == 3) {
				playTwoLastRound = true;
			}
		}

		if (wonder->getName() == "RhodosB") {

			if (numWondersPlayed == 1) {
				military.strength += 1;
				wonderPoints += 3;
				resource->gold += 3;
			}		

			else if (numWondersPlayed == 2) {
				military.strength += 1;
				wonderPoints += 4;
				resource->gold += 4;
			}
		}
	}
}

void Player::addRandomCardToHand(std::shared_ptr<Deck> deck, int age) {

	int selector = 0;
	if (age < 2) 
		selector = randomInt(5000);
	else 
		selector = randomInt(6000);

	if (selector < 1000) 
		hand->addScienceCard(deck->getScienceCard());
	else if (selector < 2000)
		hand->addBlueCard(deck->getBlueCard());
	else if (selector < 3000)
		hand->addResourceCard(deck->getResourceCard());
	else if (selector < 4000)
		hand->addMilitaryCard(deck->getMilitaryCard());
	else if (selector < 5000)
		hand->addEconomyCard(deck->getEconomyCard());
	else if (selector < 6000)
		hand->addGuildCard(deck->getGuildCard());
	
}

void Player::setLeft(std::shared_ptr<Player> _leftNeighbor) {
	leftNeighbor = _leftNeighbor;
}

void Player::setRight(std::shared_ptr<Player> _rightNeighbor) {
	rightNeighbor = _rightNeighbor;
}

int Player::score() {

	for (const auto& guild:playedGuilds)
		scoreGuild(guild);
	for (const auto& economyCard:playedEconomyCards)
		scoreEconomy(economyCard);
	int sum = 0;
	sum += science.score() + military.getScore() + resource->gold/3 + bluePoints + guildPoints + economyPoints;
	return sum;
}

void Player::print() {

	std::cout << "Strategy is " << strategy << std::endl;
	resource->print();
}

void Player::printScore() {
	
	print();
	int sum = score();
	std::cout << "TOTAL IS " << sum << std::endl;
	std::cout << "science score is " << science.score() << std::endl;
	std::cout << "military score is " << military.getScore() << std::endl;
	std::cout << "gold score is " << resource->gold/3 << std::endl;
	std::cout << "blue points score is " << bluePoints << std::endl;
	std::cout << "guild points score is " << guildPoints << std::endl;
	std::cout << "economy points score is " << economyPoints << std::endl;

}

void Player::discard() {
	hand->discard();
	resource->gold += 3;
	if (PRINT)
		std::cout << "DISCARDED" << std::endl;
}

void Player::setStrategy(std::string _strategy) {
	strategy = _strategy;
}

void Player::playResourceCard(std::shared_ptr<ResourceCard> card) {
	std::shared_ptr<Resource> value = card->getResourceCost();
	resource = resource->addTo(value);
	playedCards.insert(card->getName());
	if (card->isBrown)
		numBrownCardsPlayed += 1;
	else
		numSilverCardsPlayed += 1;
}

void Player::playEconomy(std::string name) {

	if (name == "arena")
		resource->gold += 3*numWondersPlayed;
	else if (name == "chamberOfCommerce")
		resource->gold += 2*numSilverCardsPlayed;
	else if (name == "lighthouse")
		resource->gold += numEconomyCardsPlayed;
	else if (name == "haven")
		resource->gold += numBrownCardsPlayed;
	else if (name == "caravansery")
		resource->brownWild += 1;
	else if (name == "forum")
		resource->silverWild += 1;
	else if (name == "vineyard")
		resource->gold += numBrownCardsPlayed + leftNeighbor->numBrownCardsPlayed + rightNeighbor->numBrownCardsPlayed;
	else if (name == "bazar")
		resource->gold += 2*(numSilverCardsPlayed + leftNeighbor->numSilverCardsPlayed + rightNeighbor->numSilverCardsPlayed);
	else if (name == "tavern")
		resource->gold += 5;
	else if (name == "marketplace")
		silverCost = 1;
	else if (name == "westTradingPost")
		leftCost = 1;
	else if (name == "eastTradingPost")
		rightCost = 1;
}


void Player::scoreEconomy(std::string name) {

	if (name == "arena")
		economyPoints += numWondersPlayed;
	else if (name == "chamberOfCommerce")
		economyPoints += 2*numSilverCardsPlayed;
	else if (name == "lighthouse")
		economyPoints += numEconomyCardsPlayed;
	else if (name == "haven")
		economyPoints += numBrownCardsPlayed;
}

void Player::scoreGuild(std::string name) {

	if (name == "magistratesGuild") 
		guildPoints += leftNeighbor->numBlueCardsPlayed + rightNeighbor->numBlueCardsPlayed;

	else if (name == "shipownersGuild")
		guildPoints += numBrownCardsPlayed + numSilverCardsPlayed + numGuildCardsPlayed;

	else if (name == "spiesGuild") 
		guildPoints += leftNeighbor->numMilitaryCardsPlayed + rightNeighbor->numMilitaryCardsPlayed;

	else if (name == "buildersGuild") 
		guildPoints += numWondersPlayed + leftNeighbor->numWondersPlayed + rightNeighbor->numWondersPlayed;

	else if (name == "scientistsGuild")
		science.wild += 1;

	else if (name == "tradersGuild") 
		guildPoints += leftNeighbor->numEconomyCardsPlayed + rightNeighbor->numEconomyCardsPlayed;

	else if (name == "craftsmensGuild")
		guildPoints += 2*(leftNeighbor->numSilverCardsPlayed + rightNeighbor->numSilverCardsPlayed);

	else if (name == "strategiesGuild") 
		guildPoints += leftNeighbor->numMinusOnes + rightNeighbor->numMinusOnes;

	else if (name == "philosophersGuild") 
		guildPoints += leftNeighbor->numScienceCardsPlayed + rightNeighbor->numScienceCardsPlayed;

	else if (name == "workersGuild")
		guildPoints += leftNeighbor->numBrownCardsPlayed + rightNeighbor->numBrownCardsPlayed;

}

void Player::playEconomyCard(std::shared_ptr<EconomyCard> card) {

	buy(card->getResourceCost());
	if (PRINT)
		std::cout << "playing EconomyCard " << card->getName() << std::endl;
	playEconomy(name);
	playedCards.insert(card->getName());
	playedEconomyCards.insert(card->getName());
	for (auto const& chainCard:card->canBuy) 
		chainCards.insert(chainCard);
	numEconomyCardsPlayed += 1;
}

void Player::playGuildCard(std::shared_ptr<GuildCard> card) {

	buy(card->getResourceCost());
	if (PRINT)
		std::cout << "playing GuildCard " << card->getName() << std::endl;
	playedCards.insert(card->getName());
	playedGuilds.insert(card->getName());
	for (auto const& chainCard:card->canBuy) 
		chainCards.insert(chainCard);
	numGuildCardsPlayed += 1;
}

void Player::playMilitaryCard(std::shared_ptr<MilitaryCard> card) {
	
	buy(card->getResourceCost());
	if (PRINT)
		std::cout << "playing MilitaryCard " << card->getName() << std::endl;
	military.addStrength(card->getStrength());
	for (auto const& chainCard:card->canBuy) 
		chainCards.insert(chainCard);
	playedCards.insert(card->getName());
	numMilitaryCardsPlayed += 1;
}

void Player::playScienceCard(std::shared_ptr<ScienceCard> card) {
	
	buy(card->getResourceCost());
	if (PRINT)
		std::cout << "playing ScienceCard " << card->getName() << std::endl;
	science.addCard(card->getType());
	playedCards.insert(card->getName());
	for (auto const& chainCard:card->canBuy) 
		chainCards.insert(chainCard);
	numScienceCardsPlayed += 1;
}

void Player::playBlueCard(std::shared_ptr<BlueCard> card) {
	
	buy(card->getResourceCost());
	if (PRINT)
		std::cout << "playing BlueCard " << card->getName() << std::endl;
	bluePoints += card->getPoints();
	playedCards.insert(card->getName());
	for (auto const& chainCard:card->canBuy) 
		chainCards.insert(chainCard);
	numBlueCardsPlayed += 1;
}

std::string Player::getBestValueCard(int round) {

	double max_value = 0.0;
	std::string bestValueName;

	for (auto const& it: affordableHand->getBlueCards()) {
		if (getBlueValue(it, round) > max_value)
			bestValueName = it->getName();
	}

	for (auto const& it: affordableHand->getEconomyCards()) {
		if (getEconomyValue(it->getName()) > max_value)
			bestValueName = it->getName();

	}

	for (auto const& it: affordableHand->getGuildCards()) {
		if (getGuildValue(it->getName()) > max_value)
			bestValueName = it->getName();

	}

	for (auto const& it: affordableHand->getResourceCards()) {
		if (getResourceCardValue(it) > max_value)
			bestValueName = it->getName();
	}
	
	for (auto const& it: affordableHand->getMilitaryCards()) {
		if (getMilitaryValue(round) > max_value) 
			bestValueName = it->getName();
	}

	for (auto const& it: affordableHand->getScienceCards()) {
		if (getScienceValue(it, round) > max_value)
			bestValueName = it->getName();
	}

	return bestValueName;
}

void Player::playCardNamed(std::string name) {

	for (auto const& it: affordableHand->getBlueCards()) {
		if (it->getName() == name) {
			playBlueCard(it);
			return;
		}
	}

	for (auto const& it: affordableHand->getEconomyCards()) {
		if (it->getName() == name) {
			playEconomyCard(it);
			return;
		}
	}

	for (auto const& it: affordableHand->getGuildCards()) {
		if (it->getName() == name) {
			playGuildCard(it);
			return;
		}
	}

	for (auto const& it: affordableHand->getResourceCards()) {
		if (it->getName() == name) {
			playResourceCard(it);
			return;
		}
	}
	
	for (auto const& it: affordableHand->getMilitaryCards()) {
		if (it->getName() == name) {
			playMilitaryCard(it);
			return;
		}
	}

	for (auto const& it: affordableHand->getScienceCards()) {
		if (it->getName() == name) {
			playScienceCard(it);
			return;
		}
	}
}

std::shared_ptr<Resource> Player::getResource() {
	return resource;
}

void Player::playCard(int round) {

	playCardNamed(getBestValueCard(round));
}

void Player::playTurn(int round) {

	getAffordableCards();

	if (round == 0) {
		resource = resource->addTo(wonder->getFreeResource());
		playCard(round);
	}
	else if (round == 1)
		playCard(round);
	else if (round == 2)
		playCard(round);
}

void Player::endRound(int round) {
	if (round == 0 || round == 2)
		leftNeighbor->getNewHand(hand);
	else
		rightNeighbor->getNewHand(hand);
}

void Player::getNewHand(std::shared_ptr<Deck> newHand) {
	hand = newHand;
}

int Player::strength() {

	return military.getStrength();
}

void Player::updateMilitaryPoints(int round) {

	int newPoints = 0;
	int bonus = 1;
	if (round == 1)
		bonus = 3;
	if (round == 2) 
		bonus = 5;

	if (leftNeighbor->strength() < strength())
		newPoints += bonus;
	if (leftNeighbor->strength() > strength()) {
		numMinusOnes += 1;
		newPoints -= 1;
	}

	if (rightNeighbor->strength() < strength())
		newPoints += bonus;
	if (rightNeighbor->strength() > strength()) {
		numMinusOnes += 1;
		newPoints -= 1;
	}

	military.addPoints(newPoints);
}

// returns -1 if component is unaffordable, returns the cost otherwise
int Player::componentCost(int gold, int cost, int i) {

	int wild = 0;
	if (i > 3)
		wild = std::max(resource->silverWild, 0);
	else
		wild = std::max(resource->brownWild, 0);
	int numberToBuy = cost - resource->at(i);
	if (numberToBuy <= 0)
		return 0;
	else if (numberToBuy <= wild) {
		wild = numberToBuy;
		if (i > 3)
			resource->brownWild -= wild;
		else
			resource->silverWild -= wild;
		return 0;
	}

	numberToBuy = cost - resource->at(i) - wild;
	if (numberToBuy <= 0) {
		return 0;
	}

	int leftNeighborHas = leftNeighbor->resource->at(i);
	int rightNeighborHas = rightNeighbor->resource->at(i);

	
	if (numberToBuy > leftNeighborHas + rightNeighborHas + wild)
			return -1;

	// GET TRADING COST
	if (i > 3)
		cost = numberToBuy*silverCost;

	if ((leftCost == 2) && (rightCost == 2))
		cost = numberToBuy*2;

	else if (leftCost == 1) {
		int numberFromLeft = std::min(numberToBuy, leftNeighborHas);
		int numberFromRight = numberToBuy - numberFromLeft;
		cost = numberFromLeft + 2*numberFromRight;
	}

	else if (rightCost == 1) {
		int numberFromRight = std::min(numberToBuy, rightNeighborHas);
		int numberFromLeft = numberToBuy - numberFromRight;
		cost = numberFromRight + 2*numberFromLeft;
	}

	if (gold < cost)
		return -1;
	else {
		if (i > 3)
			resource->brownWild -= wild;
		else
			resource->silverWild -= wild;
		return cost;
	}
}

// returns -1 if component is unaffordable, returns the cost otherwise
int Player::componentCost(std::string side, int gold, int cost, int i) {

	int wild = 0;
	if (i > 3)
		wild = std::max(resource->silverWild, 0);
	else
		wild = std::max(resource->brownWild, 0);
	int numberToBuy = cost - resource->at(i);
	if (numberToBuy <= 0)
		return 0;
	else if (numberToBuy <= wild) {
		wild = numberToBuy;
		if (i > 3)
			resource->brownWild -= wild;
		else
			resource->silverWild -= wild;
		return 0;
	}

	numberToBuy = cost - resource->at(i) - wild;
	if (numberToBuy <= 0) {
		return 0;
	}

	int leftNeighborHas = leftNeighbor->resource->at(i);
	int rightNeighborHas = rightNeighbor->resource->at(i);

	
	if (numberToBuy > leftNeighborHas + rightNeighborHas + wild)
			return -1;

	int numberFromLeft = 0;
	int numberFromRight = 0;

	// GET TRADING COST
	if (i > 3) {
		numberFromRight = std::min(numberToBuy, leftNeighborHas);
		numberFromLeft = numberToBuy - numberFromRight;
	}

	if ((leftCost == 2) && (rightCost == 2)) {
		numberFromLeft = std::min(numberToBuy, leftNeighborHas);
		numberFromRight = numberToBuy - numberFromLeft;
	}

	else if (leftCost == 1) {
		numberFromLeft = std::min(numberToBuy, leftNeighborHas);
		numberFromRight = numberToBuy - numberFromLeft;
	}

	else if (rightCost == 1) {
		numberFromRight = std::min(numberToBuy, rightNeighborHas);
		numberFromLeft = numberToBuy - numberFromRight;
	}

	if (side == "left")
		return leftCost*numberFromLeft;
	if (side == "right")
		return rightCost*numberFromRight;
}

void Player::buy(std::shared_ptr<Resource> resourceCost) {

	if (chainCards.count(name))
		return;

	int cost = 0;
	int leftCompCost = 0;
	int rightCompCost = 0;

	for (int i=0; i < 7; i++) {
		if (cost > 0 && PRINT)
			std::cout << "TRADED " << std::endl;
		leftCompCost = componentCost("left", resource->gold, resourceCost->at(i), i);
		rightCompCost = componentCost("right", resource->gold, resourceCost->at(i) - leftCompCost/leftCost, i);
		leftNeighbor->resource->gold += leftCompCost;
		rightNeighbor->resource->gold += rightCompCost;
		cost = componentCost(resource->gold, resourceCost->at(i), i);
		resource->gold -= cost;
	}
}

bool Player::canPlay(std::string name, std::shared_ptr<Resource> resourceCost) {

	if (playedCards.count(name))
		return false;
	if (chainCards.count(name))
		return true;
	else
		return canAfford(resourceCost);
}

bool Player::canAfford(std::shared_ptr<Resource> resourceCost) {

	if (resourceCost == nullptr)
		return false;

	int goldStillThere = resource->gold;
	int origBrownWild = resource->brownWild;
	int origSilverWild = resource->silverWild;
	int cost = 0;
	int success = true;

	for (int i=0; i < 7; i++) {
		cost = componentCost(goldStillThere, resourceCost->at(i), i);
		if (cost < 0) {
			success = false;
			break;
		}
		else 
			goldStillThere -= cost;
	}

	resource->silverWild = origSilverWild;
	resource->brownWild = origBrownWild;
	return success;
}


