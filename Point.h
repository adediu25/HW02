#pragma once

class Point {
private:
	double xCoord;
	double yCoord;
public:
	Point();
	Point(double, double);
	double getX() const;
	double getY() const;
};