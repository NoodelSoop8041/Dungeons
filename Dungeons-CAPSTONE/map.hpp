#pragma once
#include <string>


class Map {

public:

	Map();
	~Map();

	void setRoomType(const std::string& roomType);
	void setLoot(const std::string& roomType);

private:
	std::string roomType;

};