#include <iostream>

int main()
{ 
    uint8_t a = 0xFF;
    uint16_t b = 0xFF;

    a = a + 1;
    b = b + 1;

    std::cout << "a = " << static_cast<unsigned int>(a) << std::endl;
    std::cout << "b = " << static_cast<unsigned int>(b) << std::endl << std::endl;

    // Variable overflow
    uint16_t c = 0xFFFF;
    a = c;
    std::cout << "a = " << a << std::endl;
    std::cout << "c = " << c << std::endl;

    return 0;
}
