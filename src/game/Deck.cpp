std::vector<std::shared_ptr<Card>> Deck::shuffle(std::vector<std::shared_ptr<Card>> deck) {

	std::vector<std::shared_ptr<Card>> newDeck;
	int index;
	for (int i = 0; i < deck.size(); i++) {
		index = randomIndex(deck);
		newDeck.push_back(deck.at(index));
		deck.erase(deck.begin() + index);
	}

	return newDeck;
}