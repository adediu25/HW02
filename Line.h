#pragma once
#include "Point.h"

class Line {
private:
	Point point1;
	Point point2;
public:
	Line();
	Line(Point, Point);
	Point getPoint1() const;
	Point getPoint2() const;
	double getLength() const;
};