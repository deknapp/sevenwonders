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

	for (int i=3; i < argc; i++) {
		strategies.push_back(string(argv[i]));
	}

	int numRandoms = numOfPlayers - (argc - 2);

	if (numRandoms > 0) {
		for (int i= 0; i<numRandoms; i++) {
			strategies.push_back(string("random"));
		}	
	}
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
