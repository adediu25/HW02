#include "Opening.h"

Opening::Opening(std::string type, int h, int w, Room* room) {
	openingType = type;
	exteriorOpening = false;
	height = h;
	width = w;
	connectingRoom = room;
}

Opening::Opening(std::string type, int h, int w) {
	connectingRoom = nullptr;
	openingType = type;
	exteriorOpening = true;
	height = h;
	width = w;
}

std::string Opening::getType() const {
	return openingType;
}

bool Opening::isExterior() const {
	return exteriorOpening;
}

Room* Opening::getConnectRoom() const {
	return connectingRoom;
}

int Opening::getHeight() const {
	return height;
}

int Opening::getWidth() const {
	return width;
}