#include "Room.h"

Room::Room(std::string type, Wall a, Wall b) {
	roomType = type;
	walls[0] = a;
	walls[1] = b;
	walls[2] = Wall(a.getColor(), Point(a.getPoint1().getX(), b.getPoint2().getY()), Point(b.getPoint2().getX(), b.getPoint2().getY()));
	walls[3] = Wall(a.getColor(), Point(a.getPoint1().getX(), a.getPoint1().getY()), Point(a.getPoint1().getX(), b.getPoint2().getY()));
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