#include "Room.h"
#include <iostream>

Room::Room(std::string type, Wall a, Wall b) {
	roomType = type;
	walls[0] = a;
	walls[1] = b;
	walls[2] = Wall(a.getColor(), Point(a.getPoint1().getX(), b.getPoint2().getY()), Point(b.getPoint2().getX(), b.getPoint2().getY()), false);
	walls[3] = Wall(a.getColor(), Point(a.getPoint1().getX(), a.getPoint1().getY()), Point(a.getPoint1().getX(), b.getPoint2().getY()), false);
	numOpenings = 0;
}

double Room::getArea() const {
	return walls[0].getLength() * walls[1].getLength();
}

std::string Room::getType() const {
	return roomType;
}

Wall Room::getWall(int i) {
	return walls[i];
}

void Room::addOpening(Opening o) {
	openings.push_back(o);
	numOpenings++;
}

std::vector<Opening> Room::getOpenings() const {
	std::vector<Opening> ret = openings;
	return ret;
}

int Room::getNumOpenings() const {
	return numOpenings;
}

void Room::listConnections() const{
	for (int i = 0; i < numOpenings; i++) {
		if (openings[i].getConnectRoom() != nullptr) {
			std::cout << roomType << " --> " << openings[i].getConnectRoom()->getType() << std::endl;
		}
		else {
			std::cout << roomType << " --> Outside\n";
		}
	}
}