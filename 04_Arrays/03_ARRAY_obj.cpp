#include <iostream>
#include <array>

constexpr int MAX = 10;

int main() {
    std::array<int, MAX> arr;

    // initialize the array
    for (int i = MAX - 1; i >= 0; i--) {
        arr[i] = i + 1;
    }

    // print the array
    for (int i = 0; i < MAX; i++) {
        std::cout << arr[i] << " ";
    }

    // change the 5th element
    arr[4] = 100;

    // change the 6th element
    arr.at(5) = 200;

    // print the array again
    std::cout << std::endl;
    for (int i = 0; i < MAX; i++) {
        std::cout << arr[i] << " ";
    }

    // print the size of the array
    std::cout << std::endl;
    std::cout << "Size of the array: " << arr.size() << std::endl;

    return 0;
}
