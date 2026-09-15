#pragma once
#include "character.hpp"
#include "map.hpp"
#include  <iostream>


class Game {

private:
    Character player;
    Map map;

public:

    Game();

    void run();

private:
	void processEvents();
    void update(float deltaTime);
    void render();


};