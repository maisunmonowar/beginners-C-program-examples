#include <iostream>
#include <string>

class student
{
public:
    std::string name;
    int roll;
    float marks;
};

int main()
{
    std::cout << "Enter information for student 1:" << std::endl;

    student s1;

    std::cout << "Enter name: ";
    std::cin >> s1.name;

    std::cout << "Enter roll number: ";
    std::cin >> s1.roll;

    std::cout << "Enter marks: ";
    std::cin >> s1.marks;

    std::cout << "Displaying Information for student 1:" << std::endl;

    std::cout << "Name: " << s1.name << std::endl;
    std::cout << "Roll number: " << s1.roll << std::endl;
    std::cout << "Marks: " << s1.marks << std::endl;

    std::cout << "Enter information for student 2:" << std::endl;

    student s2;

    std::cout << "Enter name: ";
    std::cin >> s2.name;

    std::cout << "Enter roll number: ";
    std::cin >> s2.roll;

    std::cout << "Enter marks: ";
    std::cin >> s2.marks;

    std::cout << "Displaying Information for student 2:" << std::endl;

    std::cout << "Name: " << s2.name << std::endl;
    std::cout << "Roll number: " << s2.roll << std::endl;
    std::cout << "Marks: " << s2.marks << std::endl;

    return 0;
}
