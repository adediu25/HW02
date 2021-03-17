#include "Point.h"

Point::Point() {
	xCoord = 0;
	yCoord = 0;
}

Point::Point(double x, double y) {
	xCoord = x;
	yCoord = y;
}

double Point::getX() const {
	return xCoord;
}

double Point::getY() const {
	return yCoord;
}