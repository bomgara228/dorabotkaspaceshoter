#include "bonus.h"
#include "settings.h"

std::string Bonus::bonus_file_names[] = {
	"bolt_gold.png",
	"pill_green.png",
	"pill_red.png",
	"shield_gold.png",
	"star_gold.png",
	"death.png"
};
Bonus::Bonus(sf::Vector2f position) {
	size_t num = rand() % BONUS_TYPES_QTY;
	type = static_cast<BonusType>(num);
	texture.loadFromFile(IMAGES_FOLDER + bonus_file_names[num]);
	sprite.setTexture(texture);
	sprite.setPosition(position);
}
void Bonus::update() { sprite.move(0, 5.f); }
void Bonus::draw(sf::RenderWindow& window) { window.draw(sprite); }
sf::FloatRect Bonus::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Bonus::getPosition() { return sprite.getPosition(); }
Bonus::BonusType Bonus::getType() { return type; }
void Bonus::setDel(bool a) { del = a; }
bool Bonus::getDel() { return del; }