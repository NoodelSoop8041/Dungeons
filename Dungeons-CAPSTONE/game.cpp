#include "game.hpp"
#include <SFML/Graphics.hpp>


Game::Game() {

};

Game::~Game() {

};

void Game::run() {

    sf::RenderWindow window(
        sf::VideoMode({ 1920, 1080 }),
        "Dungeon Crawler"
    );

    sf::RectangleShape player({ 20.f, 20.f });
    player.setPosition({ 380.f, 280.f });

    sf::RectangleShape monster({ 20.f, 20.f });
    monster.setPosition({ 200.f, 200.f });
    monster.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Movement
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
            player.move({ 0.f, -1.f });

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
            player.move({ 0.f, 1.f });

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
            player.move({ -1.f, 0.f });

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
            player.move({ 1.f, 0.f });

        // Draw
        window.clear();

        window.draw(player);
        window.draw(monster);

        window.display();
    }
};

