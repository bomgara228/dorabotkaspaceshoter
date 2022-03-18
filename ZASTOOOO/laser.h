#pragma once
#include "SFML/Graphics.hpp"

class Laser {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	bool del = false;
	float X_LASER_SPEED = 0.f;
	float LASER_SPD = -10.f;
public:
	Laser(float x, float y);
	void update();
	void setSpeed(float speed_x,float speed_y);
	void draw(sf::RenderWindow&);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
	void setDel(bool);
	bool getDel();
};