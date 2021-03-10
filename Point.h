#pragma once

class Point {
private:
	int xCoord;
	int yCoord;
public:
	Point();
	Point(int, int);
	int getX() const;
	int getY() const;
};