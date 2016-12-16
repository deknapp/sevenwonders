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

    writer.StartObject();
    writer.Key("percentageWinsMap");
    writer.StartArray();
    for (auto const& it:getPercentageOfWins()) {
    	writer.StartObject();
    	writer.Key(it.second.c_str());
    	writer.Double(it.first);
    	writer.EndObject();
    }
    writer.EndArray();
    writer.EndObject();

    myfile << s.GetString();
  	myfile.close();
}

void Results::add(std::shared_ptr<Score> score) {

	totalGames += 1;

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
		
		if (strategyPlaces[it.first].size() < it.second + 1) {
			strategyPlaces[it.first].resize(it.second + 1, 0);
		}

		strategyPlaces[it.first].at(it.second) += 1;
	}

}

std::map<double, std::string> Results::getPercentageOfWins() {

	std::map<double, std::string> percentageMap;

	for (auto const& it:strategyPlaces)
		percentageMap.insert(std::pair<double, std::string>(static_cast<double>(it.second.at(0)) / static_cast<double>(totalGames), it.first));

	return percentageMap;
}

