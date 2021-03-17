#include "Line.h"
#include <cmath>
#include <iostream>

Line::Line() {
	point1 = Point();
	point2 = Point();
}

Line::Line(Point a, Point b) {
	point1 = a;
	point2 = b;
}

Point Line::getPoint1() const {
	return point1;
}

Point Line::getPoint2() const {
	return point2;
}

double Line::getLength() const {
	return sqrt(pow(point1.getX() - point2.getX(), 2) + pow(point1.getY() - point2.getY(), 2));
}