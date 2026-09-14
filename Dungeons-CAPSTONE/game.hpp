#pragma once
#include "character.hpp"
#include "map.hpp"


class Game {

private:
    Character player;
    //Map map;

public:

    Game();
    ~Game();

    void run();

private:
	void processEvents();
    void update(float deltaTime);
    void render();


};