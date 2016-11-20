int Resource::operator>(const Resource& b) {

	if (this->money > b.money)
		return 0;
	if (this->wood > b.wood)
		return 0;
	if (this->brick > b.brick)
		return 0;
	if (this->stone > b.stone)
		return 0;
	if (this->ore > b.ore)
		return 0;
	else
		return 1;
}