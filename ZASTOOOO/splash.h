#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

class SplashScreen {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	SplashScreen(std::string file_name, float scale_x = 1.f, float scale_y = 1.f) {
		texture.loadFromFile(file_name);
		sprite.setTexture(texture);
		sprite.setScale(scale_x, scale_y);
		sprite.setColor(sf::Color(255, 228, 181));
	}
	sf::Sprite getSprite() { return sprite; }
};