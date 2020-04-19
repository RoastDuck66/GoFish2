#include "Deck.h"

using namespace std;
using namespace sf;

Deck::Deck(int suitNum, int posNum) : Card(1, 1)
{
	for (int i = 1; i <= suitNum; i++)
	{
		for (int j = 1; j <= posNum; j++)
		{
			Card card(i, j);
			this->inDeck.push_back(card);
		}
	}
}

vector<Card> Deck::shuffleDeck(vector<Card>& inDeck)
{
	random_shuffle(inDeck.begin(), inDeck.end());
	return inDeck;
}


void Deck::printDeck()
{
	this->shuffleDeck(inDeck);

	for (int i = 0; i < inDeck.size(); i++)
	{
		cout << "In Deck # " << i << "is:" << inDeck[i] << endl;
	}
}


