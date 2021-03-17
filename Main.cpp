#include <iostream>
#include "HousePlan.h"

using namespace std;

int main() {
	HousePlan floorPlan;
	floorPlan.addRoom(Room("Bedroom", Wall(Point(0, 0), Point(20, 0), false), Wall(Point(20, 0), Point(20, 20), false)));
	cout << floorPlan.getArea() << endl;
	cout << floorPlan.getRoom("Bedroom").getWall(0).getLength() << endl;
	cout << floorPlan.getRoom("Bedroom").getWall(1).getLength() << endl;
}