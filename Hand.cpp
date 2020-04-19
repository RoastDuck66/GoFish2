#include "Hand.h"

using namespace std;
using namespace sf;

void Hand::initHandLogic()
{
	this->posRandom = rand() % 13 + 1;
	this->suitRandom = rand() % 4 + 1;
}

Hand::Hand(int suitNum, int posNum): Deck(1, 1)
{
	//Get random cards from deck
	for (int i = 1; i <= suitNum; i++)
	{
		for (int j = 1; j <= posNum; j++)
		{
			this->initHandLogic();
			Card card(this->suitRandom, this->posRandom);
			this->inHand.push_back(card);
		}
	}
}

void Hand::printHand()
{
	for (int i = 0; i <= 6; i++)
	{
		cout << "In Hand # " << i << "is:" << inHand[i] << endl;
	}
}
