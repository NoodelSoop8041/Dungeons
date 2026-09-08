#include "dungeons.hpp"
#include <iostream>
using namespace std;

// Functions of the dungeons:
// 1. Character creation (includes weapons and stats)
// 2. Character movement (creating a map and moving between rooms)
// 3. Character combat (boss creation and attacks)
// 4. Character inventory (inherited from creation / includes leveling)
// 5. Visuals (this will be a work in progress)

//What can the charcter do?
// Move (up, down, left, right), inspect rooms, attack, pick up items, inventory,
// use items, view stats, view map (maybe get to this)

Character::Character() {
    name = "Default Name";
    health = 10;
    strength = 1;
    defense = 1;
    weapon = "Fists";
    experience = 0;
    level = 1;
    inventory = {};

}

Character::~Character() {
    // Destructor logic if needed
}

