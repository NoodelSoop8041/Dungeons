#include "room.hpp"
#include  <iostream>


Room::Room(const std::string& name, const std::string& description) 
	: name(name), description(description), 
	north(nullptr), south(nullptr), east(nullptr), west(nullptr) {}

void Room::setNorth(Room* room) { north = room; }
void Room::setSouth(Room* room) { south = room; }
void Room::setEast(Room* room) { east = room; }
void Room::setWest(Room* room) { west = room; }

Room* Room::getNorth() const { return north; }
Room* Room::getSouth() const { return south; }
Room* Room::getEast() const { return east; }
Room* Room::getWest() const { return west; }

std::string Room::getName() const { return name; }

void Room::inspect() const {
	std::cout << "You are in " << name << ". " << description << std::endl;
}
