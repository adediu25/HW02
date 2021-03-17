#include "HousePlan.h"

void HousePlan::addRoom(Room room) {
	rooms.push_back(room);
}

Room HousePlan::getRoom(std::string type) {
	for (int i = 0; i < rooms.size(); i++) {
		if (rooms[i].getType() == type) {
			return rooms[i];
		}
	}
}

double HousePlan::getArea() {
	double totalArea = 0;
	for (int i = 0; i < rooms.size(); i++) {
		totalArea += rooms[i].getArea();
	}
	return totalArea;
}

void HousePlan::showPlan() {

}