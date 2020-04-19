#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <sstream>
#include <Windows.h>
#include <conio.h>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace std;
using namespace sf;

class Card
{
private:
	//Card Info
	enum suit { SPADE = 1, CLUB, DIAMOND, HEART };
	enum position { A = 1, N2, N3, N4, N5, N6, N7, N8, N9, N10, J, Q, K};
	int cardSuit;
	int cardPosition;
protected:
	//Overloaded Operators
	friend ostream& operator<< (ostream& os, const Card& cd);
	friend bool operator== (const Card& cd, const Card& cd2);
public:
	//Constructor
	Card(int cardSuit, int cardPosition);
	//Public Functions
	
};

#endif