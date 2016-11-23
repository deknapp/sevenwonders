#include "../../include/cards/ScienceCard.h"
#include <string>

ScienceCard::ScienceCard(std::string _name, int age, int _minPlayers) :
						name(_name), resourceCost(new Resource()), gold(0), minPlayers(_minPlayers) {}

ScienceCard::ScienceCard(std::string _name, int age, int _glass, int _carpet, int _paper, int _gold, int _minPlayers) :
						name(_name), resourceCost(new Resource(_glass, _carpet, _paper)), gold(_gold), minPlayers(_minPlayers) {}

ScienceCard::ScienceCard(std::string _name, int age, int _wood, int _stone, int _brick, int _ore, int _glass, int _carpet, int _paper, int _gold, int _minPlayers) :
						name(_name), resourceCost(new Resource(_wood, _stone, _brick, _ore, _glass, _carpet, _paper)), gold(_gold), minPlayers(_minPlayers) {}


ScienceCard::~ScienceCard() {}
