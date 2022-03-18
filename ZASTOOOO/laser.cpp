#include "laser.h"
#include "settings.h"

Laser::Laser(float x, float y) {
	texture.loadFromFile(IMAGES_FOLDER + BIG_LASER_FILE_NAME);
	sprite.setTexture(texture);
	sf::FloatRect g_bounds = sprite.getGlobalBounds();
	sprite.setPosition(x - g_bounds.width / 2, y - g_bounds.height / 2);
}
void Laser::update() {
	sprite.move(X_LASER_SPEED, LASER_SPD);
}
void Laser::draw(sf::RenderWindow& window) { window.draw(sprite); }
sf::FloatRect Laser::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Laser::getPosition() { return sprite.getPosition(); }
void Laser::setDel(bool a) { del = a; }
bool Laser::getDel() { return del; }
void Laser::setSpeed(float speed_x, float speed_y) { X_LASER_SPEED = speed_x, LASER_SPD = speed_y; }