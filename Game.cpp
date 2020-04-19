#include "Game.h"

using namespace std;
using namespace sf;

void Game::initVariable()
{
	this->window = nullptr;

	//Game Logic
	this->endGame = false;
}

void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 800;

	this->window = new RenderWindow(this->videoMode, "Test", Style::Titlebar | Style::Resize | Style::Close);

	this->window->setFramerateLimit(60);
}

void Game::initFonts()
{
	if (!this->font.loadFromFile("Fonts/RobotoSlab-Regular.ttf"))
	{
		cout << "ERROR: Game::initFonts::Failed to load font!" << endl;
	}
}

void Game::initText()
{
	this->uiText.setFont(this->font);
	this->uiText.setCharacterSize(24);
	this->uiText.setFillColor(Color::White);
	this->uiText.setString("NONE");
}

void Game::initGameDeck()
{
	Deck deck(4, 13);
	Hand hand(1, 7);

	hand.printHand();
	deck.printDeck();
}

void Game::initPlayers()
{
	Player player;
	Player ai;
}

void Game::playGame()
{
	
}

bool Game::playAgain()
{
	return true;
}

Game::Game()
{
	this->initVariable();
	this->initWindow();
	this->initFonts();
	this->initText();
	this->initGameDeck();
	this->initPlayers();
}

Game::~Game()
{
	delete this->window;
}

const bool Game::running() const
{
	return this->window->isOpen();
}

const bool Game::getEndGame() const
{
	return this->endGame;
}

void Game::pollEvents()
{
	//Event polling
	while (this->window->pollEvent(this->event))
	{
		switch (this->event.type)
		{
		case Event::Closed:
			this->window->close();
			break;
		case Event::KeyPressed:
			if (event.key.code == Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}

void Game::updateText(string text)
{
	stringstream ss;

	ss << text << endl;

	this->uiText.setString(ss.str());
}

void Game::update()
{
	this->pollEvents();

	if (!this->endGame)
	{
		this->playGame();

		if (this->playAgain() == false)
		{
			this->endGame = true;
		}
	}
}

void Game::renderText(RenderTarget& target)
{
	target.draw(this->uiText);
}

void Game::render()
{
	// Clear Old Frame
	this->window->clear();

	// Draw
	this->renderText(*this->window);

	// Display New Frame
	this->window->display();
}
