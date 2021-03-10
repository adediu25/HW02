#pragma once
#include "Wall.h"

class Room {
private:
	std::string roomType;
	Wall walls[4];
public:
	Room(std::string, Wall, Wall);
	int getArea()const;
	std::string getType() const;
	Wall getWall(int);
};