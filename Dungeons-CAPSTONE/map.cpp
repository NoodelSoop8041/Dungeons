#include "game.hpp"
#include "map.hpp"


Map::Map() {};


Map::~Map() {};

void Map::setRoomType(const std::string& roomType) {
    this->roomType = roomType;
}

void Map::setLoot(const std::string& roomType) {
    // Implementation for setting loot
}
