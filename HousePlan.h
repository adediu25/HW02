#pragma once
#include <vector>
#include "Room.h"

class HousePlan {
private:
	std::vector<Room> rooms;
	int numRooms;
public:
	HousePlan();
	void addRoom(Room);
	Room* getRoom(std::string);
	double getArea();
	void showPlan();
};