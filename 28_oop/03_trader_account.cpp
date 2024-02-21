#include <iostream>
#include <string>

class TraderAccount
{
public:
    std::string name;
    std::string accountNumber;
    float balance;

    // Default constructor
    TraderAccount()
        : name(""), accountNumber(""), balance(0.0)
    {
    }

    // Parameterized constructor
    TraderAccount(const std::string& traderName, const std::string& traderAccountNumber, float traderBalance)
        : name(traderName), accountNumber(traderAccountNumber), balance(traderBalance)
    {
    }

    // Function to print all information
    void printInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Account number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main()
{
    TraderAccount trader1; // Using default constructor
    trader1.name = "John Doe";
    trader1.accountNumber = "123456789";
    trader1.balance = 10000.0;
    

    std::cout << "Displaying Information for trader 1:" << std::endl;
    trader1.printInfo();

    TraderAccount trader2("Jane Smith", "987654321", 5000.0); // Using parameterized constructor

    std::cout << "Displaying Information for trader 2:" << std::endl;
    trader2.printInfo();

    return 0;
}
