#include "Point.h"

Point::Point() {
	xCoord = 0;
	yCoord = 0;
}

Point::Point(int x, int y) {
	xCoord = x;
	yCoord = y;
}

int Point::getX() const {
	return xCoord;
}

int Point::getY() const {
	return yCoord;
}