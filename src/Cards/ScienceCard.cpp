#include "../../include/cards/ScienceCard.h"
#include <string>

ScienceCard::ScienceCard(std::string _name, std::string _type, int _age, int _gold, int _minPlayers):
						name(_name), resourceCost(new Resource()), type(_type), age(_age), gold(0), minPlayers(_minPlayers) {}

ScienceCard::ScienceCard(std::string _name, int glass, int carpet, int paper, std::string _type, int _age, int _gold, int _minPlayers) :
						name(_name), resourceCost(new Resource(glass, carpet, paper)), type(_type), age(_age), gold(_gold), minPlayers(_minPlayers) {}

ScienceCard::ScienceCard(std::string _name, int wood, int stone, int brick, int ore, int glass, int carpet, int paper, std::string _type, int _age, int _gold, int _minPlayers) :
						name(_name), resourceCost(new Resource(wood, stone, brick, ore, glass, carpet, paper)), type(_type), age(_age), gold(_gold), minPlayers(_minPlayers) {}


ScienceCard::~ScienceCard() {}
