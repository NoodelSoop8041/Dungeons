#pragma once
#include <string>

class Room {

private:
	std::string name;
	std::string description;

	Room* north;
	Room* south;
	Room* east;
	Room* west;

public:
	Room(const std::string& name, const std::string& description);

	void setNorth(Room* room);
	void setSouth(Room* room);
	void setEast(Room* room);
	void setWest(Room* room);

	Room* getNorth() const;
	Room* getSouth() const;
	Room* getEast() const;
	Room* getWest() const;

	std::string getName() const;

	void inspect() const;

};