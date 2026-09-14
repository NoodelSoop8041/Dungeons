#pragma once
#include <vector>
#include <string>


class Character {

    public:

        // Constructor
        Character();

        // Destructor
        ~Character();

        void moveChar(const std::string& direction);

        void inspectRoom();

        void attack();

        void pickUpItem(const std::string& item);

        void useItem(const std::string& item);

        void viewStats();

        void viewMap();

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

};
