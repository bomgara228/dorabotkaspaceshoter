#include "explosion.h"
#include "settings.h"
#include "game.h"

std::string Explosion::explosion_anim_files[] = {
	"regularExplosion00.png",
	"regularExplosion01.png",
	"regularExplosion02.png",
	"regularExplosion03.png",
	"regularExplosion04.png",
	"regularExplosion05.png",
	"regularExplosion06.png",
	"regularExplosion07.png",
	"regularExplosion08.png"
};

Explosion::Explosion(sf::Vector2f pos) { 
	texture.loadFromFile(IMAGES_FOLDER + explosion_anim_files[0]);
	sprite.setTexture(texture);
	position = pos;
	sprite.setPosition(position);
}
void Explosion::update() {
	sf::Time now = clock.getElapsedTime();
	if (now.asMilliseconds() > frame_delay) {
		frame++;
		if (frame < 9) {
			clock.restart();
			texture.loadFromFile(IMAGES_FOLDER + explosion_anim_files[frame]);
			sprite.setTexture(texture);
		}
		else {
			del = true;
		}
	}
}
bool Explosion::getDel() { return del; }
void Explosion::draw(sf::RenderWindow& window) { window.draw(sprite); }