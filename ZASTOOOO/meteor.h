#pragma once
#include "SFML/Graphics.hpp"

class Meteor {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	static std::string meteor_file_names[];
	float speedx, speedy;

public:
	Meteor();
	void update();
	void draw(sf::RenderWindow&);
	void spawn();
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
};