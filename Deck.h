#ifndef DECK_H
#define DECK_H

#include "Card.h"

using namespace std;
using namespace sf;

class Deck : public Card
{
private:
	//Private Functions
	vector<Card> shuffleDeck(vector<Card>& inDeck);

protected:
	//Storage
	vector<Card> inDeck;


public:
	//Constructor
	Deck(int suitNum, int posNum);

	//Public Functions
	void printDeck();
	
};

#endif