#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Game {

    public:

        Game();

        ~Game();

        enum Direction {
            UP,
            DOWN,
            LEFT,
            RIGHT
        };

        enum RoomType {
            EMPTY,
            TREASURE,
            BOSS,
            PUZZLE
        };

        enum RoomShape {
            BRANCH = 'T',
            END_ROOM = 'C',
            HALL = 'H',
            CROSS = '+',
            CORNER = 'L',

        };


};

class Character : Game {

    public:

        // Constructor
        Character();

        // Destructor
        ~Character();

        void moveChar(string direction);

        void inspectRoom();

        void attack();

        void pickUpItem(string item);

        void useItem(string item);

        void viewStats();

        void viewMap();

    private:

        string name;
        int health;
        int strength;
        int defense;
        string weapon;
        int experience;
        int level;
        vector<string> inventory;

        vector<string> lootTable;

};

class Room : Game {

    public:

        Room();

        ~Room();

        void setRoomType(RoomType type);


};