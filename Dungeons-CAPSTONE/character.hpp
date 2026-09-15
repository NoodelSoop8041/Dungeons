#pragma once
#include <vector>
#include <string>

class Room;

class Character {

    public:

        // Constructor
        Character();


        void moveChar(const std::string& direction);

        void inspectRoom();
        void attack();
        void pickUpItem(const std::string& item);
        void useItem(const std::string& item);
        void viewStats();
        void viewMap();

        void setCurrentRoom(Room* room);
        Room* getCurrentRoom() const;

    private:

        std::string name;
        int health;
        int strength;
        int defense;
        std::string weapon;
        int experience;
        int level;

        std::vector<std::string> inventory;
        std::vector<std::string> lootTable;

		Room* currentRoom;
};
