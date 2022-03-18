#pragma once
#include "SFML/Graphics.hpp"
class TextObject {
private:
	sf::Font font;
	sf::Text text;
public:
	TextObject(std::string file_name, int size, float x, float y,
		sf::Color color) {
		font.loadFromFile(file_name);
		text.setFont(font);
		text.setFillColor(color);
		text.setCharacterSize(size);
		text.setPosition(x, y);
	}
	sf::Text getText() { return text; }
	void update(std::string str) { text.setString(str); }
};