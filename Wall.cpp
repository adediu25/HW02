#include "Wall.h"

Wall::Wall() {
	exterior = false;
	wallColor = "";
	numOpenings = 0;
}

Wall::Wall(Point a, Point b, bool ext) : Line(a, b) {
	wallColor = "";
	exterior = ext;
}

Wall::Wall(std::string color, Point a, Point b, bool ext) : Line(a, b){
	exterior = ext;
	wallColor = color;
}

void Wall::setExterior(bool ext) {
	exterior = ext;
}

bool Wall::isExterior() const {
	return exterior;
}

std::string Wall::getColor() const {
	return wallColor;
}

void Wall::setColor(std::string color) {
	wallColor = color;
}