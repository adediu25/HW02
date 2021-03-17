#include <iostream>
#include "HousePlan.h"

using namespace std;

int main() {

	HousePlan floorPlan;

	floorPlan.addRoom(Room("Entrance", Wall(Point(0, 0), Point(5, 0), false), Wall(Point(5, 0), Point(5, 15), false)));
	floorPlan.addRoom(Room("Living Room", Wall(Point(5, 0), Point(25, 0), false), Wall(Point(25, 0), Point(25, 20), false)));
	floorPlan.addRoom(Room("Bedroom", Wall(Point(25, 0), Point(40, 0), false), Wall(Point(40, 0), Point(40, 20), false)));
	floorPlan.addRoom(Room("Kitchen", Wall(Point(-15, 15), Point(5, 15), false), Wall(Point(5, 15), Point(5, 35), false)));
	floorPlan.addRoom(Room("Master Bedroom", Wall(Point(-40, 25), Point(-15, 25), false), Wall(Point(-15, 25), Point(-15, 50), false)));
	floorPlan.addRoom(Room("Master Bath", Wall(Point(-15, 35), Point(0, 35), false), Wall(Point(0, 35), Point(0, 45), false)));
	floorPlan.addRoom(Room("Bathroom", Wall(Point(25, 20), Point(35, 20), false), Wall(Point(35, 20), Point(35, 25), false)));
	floorPlan.addRoom(Room("Laundry Room", Wall(Point(-25, 15), Point(-15, 15), false), Wall(Point(-15, 15), Point(-15, 25), false)));
	floorPlan.addRoom(Room("Garage", Wall(Point(-15, 0), Point(0, 0), false), Wall(Point(0, 0), Point(0, 15), false)));
	floorPlan.addRoom(Room("Dining Room", Wall(Point(5, 20), Point(25, 20), false), Wall(Point(25, 20), Point(25, 35), false)));
	floorPlan.addRoom(Room("Storage Room", Wall(Point(5, 40), Point(25, 40), false), Wall(Point(25, 40), Point(25, 50), false)));

	floorPlan.getRoom("Living Room")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Entrance")));
	floorPlan.getRoom("Living Room")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Dining Room")));
	floorPlan.getRoom("Living Room")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Bedroom")));
	floorPlan.getRoom("Kitchen")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Entrance")));
	floorPlan.getRoom("Kitchen")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Laundry Room")));
	floorPlan.getRoom("Kitchen")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Garage")));
	floorPlan.getRoom("Kitchen")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Master Bedroom")));
	floorPlan.getRoom("Kitchen")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Dining Room")));
	floorPlan.getRoom("Entrance")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Kitchen")));
	floorPlan.getRoom("Entrance")->addOpening(Opening("front door", 7, 2));
	floorPlan.getRoom("Entrance")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Living Room")));
	floorPlan.getRoom("Bedroom")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Living Room")));
	floorPlan.getRoom("Bedroom")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Bathroom")));
	floorPlan.getRoom("Master Bedroom")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Master Bath")));
	floorPlan.getRoom("Master Bedroom")->addOpening(Opening("door", 7, 2, floorPlan.getRoom("Kitchen")));
	floorPlan.getRoom("Master Bath")->addOpening(Opening("door", 7, 2, (floorPlan.getRoom("Master Bedroom"))));
	floorPlan.getRoom("Bathroom")->addOpening(Opening("door", 7, 2, (floorPlan.getRoom("Dining Room"))));
	floorPlan.getRoom("Bathroom")->addOpening(Opening("door", 7, 2, (floorPlan.getRoom("Bedroom"))));
	floorPlan.getRoom("Dining Room")->addOpening(Opening("door", 7, 2, (floorPlan.getRoom("Storage Room"))));
	floorPlan.getRoom("Dining Room")->addOpening(Opening("door", 7, 2, (floorPlan.getRoom("Living Room"))));
	floorPlan.getRoom("Dining Room")->addOpening(Opening("door", 7, 2,(floorPlan.getRoom("Bathroom"))));
	floorPlan.getRoom("Dining Room")->addOpening(Opening("door", 7, 2, (floorPlan.getRoom("Kitchen"))));
	floorPlan.getRoom("Storage Room")->addOpening(Opening("door", 7, 2, (floorPlan.getRoom("Dining Room"))));
	floorPlan.getRoom("Garage")->addOpening(Opening("door", 7, 2, (floorPlan.getRoom("Kitchen"))));
	floorPlan.getRoom("Garage")->addOpening(Opening("Garage Door", 7, 2));
	floorPlan.getRoom("Laundry Room")->addOpening(Opening("door", 7, 2, (floorPlan.getRoom("Kitchen"))));

	floorPlan.showPlan();

	return 0;
}