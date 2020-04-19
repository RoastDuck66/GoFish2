#ifndef PLAYER_H
#define PLAYER_H

#include "Hand.h"

using namespace std;
using namespace sf;

class Player
{
private:
	//Game Logic
	int points;
	
	//Private Functions
	void initPlayer();
public:
	//Constructor
	Player();
};

#endif