#pragma once

class Opening;
#include "Wall.h"
#include "Opening.h"
#include <vector>

// In a room, point1 of the wall is always the left
// or bottom endpoint.

// walls starts at bottom wall and goes around CCW
class Room {
private:
	std::string roomType;
	Wall walls[4];
	std::vector<Opening> openings;
	int numOpenings;
public:
	Room(std::string, Wall, Wall);
	double getArea() const;
	std::string getType() const;
	Wall getWall(int);
	void addOpening(Opening);
	std::vector<Opening> getOpenings() const;
	int getNumOpenings() const;
	void listConnections() const;
};