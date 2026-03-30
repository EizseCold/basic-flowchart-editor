#include <SFML/Graphics.hpp>

int main() {
    // 1. Create a window that is 800x600 pixels
    sf::RenderWindow window(sf::VideoMode(800, 600), "Basic Flowchart Editor");

    // 2. The "Game Loop" - this keeps the window open until you click the 'X'
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            // If the user clicks the close button, close the window
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // 3. Render cycle: Clear the screen, draw stuff, display it
        window.clear(sf::Color(30, 30, 30)); // Clears with a dark gray color
        
        window.display(); // Flushes everything to your screen
    }

    return 0;
}
