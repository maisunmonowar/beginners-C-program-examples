#include <iostream>

int main() {
    int num = 10;
    int* ptr; // ptr will only hold and address. An address which will have an integer value. 

    ptr = &num;

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl; // we are printing the pointer. AKA address of num
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl; 


    std::cout << "\n\nWe can use pointers to change the value of num" << std::endl;
    *ptr = 20;
    std::cout << "Value of num: " << num << std::endl;

    return 0;
}
