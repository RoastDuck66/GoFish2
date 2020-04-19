#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include "Deck.h"

using namespace std;
using namespace sf;

class Hand : public Deck
{
private:
	//Storage
	vector<Card> inHand;

	//Logic
	int posRandom;
	int suitRandom;

	//Private Functions
	void initHandLogic();
public:
	//Constructor
	Hand(int suitNum, int posNum);

	//Public Functions
	void printHand();
};

#endif