#include "Wall.h"

Wall::Wall() {
	exterior = false;
	wallColor = "";
	numOpenings = 0;
}

Wall::Wall(std::string color, Point a, Point b) : Line(a, b){
	wallColor = color;
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