ArgProcessor::ArgProcessor(int argc, char* argv[]) {

	option::Stats  stats(usage, argc, argv);
  	option::Option options[stats.options_max], buffer[stats.buffer_max];
   	option::Parser parse(usage, argc, argv, options, buffer);
   	
	if (argv[0] < 3) {
		std::cout << "invalid number of arguments" << std::endl;
		return NULL;
	}

	numGames = atoi(argv[2]);
	numPlayers = atoi(argv[1]);

)

int ArgProcessor::getNumPlayers() {
	return numPlayers;
}

int ArgProcessor::getNumGames() {
	return numGames;
}
	

std::vector<std::string> getStrategies() {
	return strategies;
}
