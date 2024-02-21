#include <iostream>

class Toy {
public:
    Toy() {
        std::cout << "Toy acquired." << std::endl;
    }

    ~Toy() {
        std::cout << "Toy destroyed." << std::endl;
    }

    void play() {
        std::cout << "Playing with the toy!" << std::endl;
    }
};

void playWithToy() {
    Toy toy; // Acquire the toy

    // Simulate an exception
    throw std::runtime_error("Oops! The toy broke.");

    // Play with the toy
    // ...
}

int main() {
    try {
        playWithToy();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
