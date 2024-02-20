#include <iostream>

int main() {
    int n = 1;

    do {
        std::cout << n << std::endl;
        n++;
    } while (n <= 5);

    std::cout << "again..." << std::endl;
    do {
        std::cout << n << std::endl;
        n++;
    } while (n <= 5);

    std::cout << "again..." << std::endl;
    while (n <= 5) {
        std::cout << n << std::endl;
        n++;
    }

    return 0;
}
