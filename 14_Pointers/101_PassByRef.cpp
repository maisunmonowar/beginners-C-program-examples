#include <iostream>

void passByValue(int a)
{
    std::cout << "Inside passByValue, a = " << a << std::endl;
    a = 5;
    std::cout << "Inside passByValue, a = " << a << std::endl;
}

void passByRef(int& a)
{
    std::cout << "Inside passByRef, a = " << a << std::endl;
    a = 10;
    std::cout << "Inside passByRef, a = " << a << std::endl;
}

int main()
{
    int a = 20;
    std::cout << "before doing anything a = " << a << std::endl;
    passByValue(a);
    std::cout << "back in main a = " << a << std::endl;
    passByRef(a);
    std::cout << "After second function call, a = " << a << std::endl;
    return 0;
}