#include "game.h"
#include "settings.h"

Game:Game():
	window(sf::VideoMode(WINDOW_WIDTH,WINDOW_HEIGHT),WINDOW_TITLE,sf::Style::Titlebar | sf::Style::Close)
{

}
void Game::check_events() {
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) window.close();
	}
}
void Game::update() {}
void Game::draw() {}

