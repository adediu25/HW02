#pragma once
#include "Wall.h"

// In a room, point1 of the wall is always the left
// or bottom endpoint.

// walls starts at bottom wall and goes around CCW
class Room {
private:
	std::string roomType;
	Wall walls[4];
public:
	Room(std::string, Wall, Wall);
	double getArea() const;
	std::string getType() const;
	Wall getWall(int);
};