#include <iostream>
#include <cstring>

int main() {
    // Declare a string variable
    std::string str = "Hello, World!";

    // Print the string
    std::cout << str << std::endl;

    // we can change any character of the string
    str.at(7) = 'm';

    std::cout << std::endl << str << std::endl;

    return 0;
}
