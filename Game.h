#ifndef GAME_H
#define GAME_H

#include "Player.h"

using namespace std;
using namespace sf;

class Game
{
private:
	//--Variables--//
	//Window
	RenderWindow* window;
	VideoMode videoMode;
	Event event;

	//Resources
	Font font;

	//Text
	Text uiText;

	//Game logic
	bool endGame;

	//Private Functions
	void initVariable();
	void initWindow();
	void initFonts();
	void initText();
	void initGameDeck();
	void initPlayers();
	void playGame();
	bool playAgain();

public:
	//Constructor/Destructor
	Game();
	virtual ~Game();

	//Accessors
	const bool running() const;
	const bool getEndGame() const;

	//Public Functions
	void pollEvents();

	void updateText(string text);
	void update();

	void renderText(RenderTarget& target);
	void render();
};

#endif

