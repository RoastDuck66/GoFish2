#include "Card.h"
#include "Deck.h"
#include "Game.h"

using namespace std;
using namespace sf;

int main()
{
	//Initialize randomize seed
	srand(static_cast<unsigned>(time(NULL)));

	// Create The Game Engine
	Game game;
	// Start Of Game Loop
	while (game.running() && !game.getEndGame())
	{
		//Update
		game.update();

		//Render
		game.render();
	}
	//End of Application
	return 0;
}