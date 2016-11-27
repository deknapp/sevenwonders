#include "../../include/components/Resource.h"

Resource::Resource() : wood(0), brick(0), stone(0), ore(0), glass(0), paper(0), carpet(0) {}

Resource::Resource(int _glass, int _paper, int _carpet) : wood(0), brick(0), stone(0), ore(0), 
														 glass(_glass), paper(_paper), carpet(_carpet) {}

Resource::Resource(int _wood, int _brick, int _stone, int _ore) : 
				  wood(_wood), brick(_brick), stone(_stone), ore(_ore), glass(0), paper(0), carpet(0) {}

Resource::Resource(int _wood, int _brick, int _stone, int _ore, int _glass, int _paper, int _carpet) : 
				  wood(_wood), brick(_brick), stone(_stone), ore(_ore), glass(_glass), paper(_paper), carpet(_carpet) {}

Resource::~Resource() {}

void Resource::addCard(int wood, int brick, int stone, int ore, int glass, int paper, int carpet) {
	wood += wood;
	stone += stone;
	brick += brick;
	ore += ore;
	glass += glass;
	paper += paper;
	carpet += carpet;
}

int Resource::canBuy(std::shared_ptr<Resource> resourceCost) {

	if (glass < resourceCost->glass)
		return 0;
	if (paper < resourceCost->paper)
		return 0;
	if (carpet < resourceCost->carpet)
		return 0;
	if (wood < resourceCost->wood)
		return 0;
	if (brick < resourceCost->brick)
		return 0;
	if (stone < resourceCost->stone)
		return 0;
	if (ore < resourceCost->ore)
		return 0;
	else
		return 1;
}