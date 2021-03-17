#pragma once

class Room;
#include "Room.h"

class Opening {
private:
	std::string openingType;
	bool exteriorOpening;
	Room* connectingRoom;
	int height;
	int width;
public:
	Opening(std::string, int, int, Room*);
	Opening(std::string, int, int);
	std::string getType() const;
	bool isExterior() const;
	Room* getConnectRoom() const;
	int getHeight() const;
	int getWidth() const;
};