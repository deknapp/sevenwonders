#include "../../include/results/Results.h"
#include <iostream>
#include <fstream>

Results::Results() : totalGames(0) {}

Results::~Results() {}

void Results::printJsonFile() {

	std::ofstream myfile;
	myfile.open ("Results.txt");

	rapidjson::StringBuffer s;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(s);

    for (auto const& it:getPercentageOfWins()) {
    	writer.StartObject();
    	writer.Key(it.second.c_str());
    	writer.Double(it.first);
    }

    myfile << s.GetString();
  	myfile.close();
}

void Results::add(std::shared_ptr<Score> score) {

	for (auto const& it:score->getScores()) {
		if (!strategyScores.count(it.first)) 
			strategyScores.insert(std::pair<std::string, int>(it.first, it.second));
		else 
			strategyScores[it.first] += it.second;
	}

	for (auto const& it:score->getPlaces()) {

		if (!strategyPlaces.count(it.first)) {
			std::vector<int> newVector (it.second + 1, 0);
			strategyPlaces.insert(std::pair<std::string, std::vector<int> >(it.first, newVector));
		}
		
		strategyPlaces[it.first].at(it.second) += 1;
	}

}

std::map<double, std::string> Results::getPercentageOfWins() {

	std::map<double, std::string> percentageMap;

	for (auto const& it:strategyPlaces)
		percentageMap.insert(std::pair<double, std::string>(it.second.at(0) / totalGames, it.first));

	return percentageMap;
}

