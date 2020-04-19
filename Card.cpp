#include "Card.h"

using namespace std;
using namespace sf;

Card::Card(int cardSuit, int cardPosition)
{
	this->cardSuit = suit(cardSuit);
	this->cardPosition = position(cardPosition);
}

ostream& operator<<(ostream& os, const Card& card)
{
	os << card.cardSuit << '/' << card.cardPosition << endl;
	return os;
}

bool operator==(const Card& cd, const Card& cd2)
{
	return (cd.cardPosition == cd2.cardPosition && cd.cardSuit == cd2.cardSuit);
}
