#pragma once
#include "Line.h"
#include <string>

class Wall : public Line {
private:
	bool exterior;
	std::string wallColor;
	int numOpenings;
public:
	Wall();
	Wall(Point, Point, bool);
	Wall(std::string, Point, Point, bool);
	void setExterior(bool);
	bool isExterior() const;
	std::string getColor() const;
	void setColor(std::string);
};