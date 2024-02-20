#include <iostream>

int main()
{
    float a, b;
    int c;
    std::cout << "Enter two float Numbers: ";
    std::cin >> a >> b;
    c = static_cast<int>(a + b);
    std::cout << "The Sum is " << c;
    return 0;
}
