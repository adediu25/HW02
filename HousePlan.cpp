#include "HousePlan.h"
#include <iostream>

HousePlan::HousePlan() {
	numRooms = 0;
}

void HousePlan::addRoom(Room room) {
	rooms.push_back(room);
	numRooms++;
}

Room* HousePlan::getRoom(std::string type) {
	for (int i = 0; i < numRooms; i++) {
		if (rooms[i].getType() == type) {
			return &(rooms[i]);
		}
	}
}

double HousePlan::getArea() {
	double totalArea = 0;
	for (int i = 0; i < numRooms; i++) {
		totalArea += rooms[i].getArea();
	}
	return totalArea;
}

void HousePlan::showPlan() {
	std::cout << "Floor Plan\n__________\n\n";
	std::cout << "Number of Rooms: " << numRooms << std::endl;
	std::cout << "Total Area of Home: " << getArea() << " sq. ft.\n\n";

	std::cout << "Rooms in Home: \n\n";
	for (int i = 0; i < numRooms; i++) {
		std::cout << rooms[i].getType() << ":\n";
		std::cout << "Area: " << rooms[i].getArea() << " sq. ft.\n";
		std::cout << "Connections: \n";
		rooms[i].listConnections();
		std::cout << std::endl;
	}
}