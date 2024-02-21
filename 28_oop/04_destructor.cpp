#include <iostream>
#include <string>

class TraderAccount
{
public:
    std::string name;
    std::string accountNumber;
    float balance;

    // Constructor
    TraderAccount(const std::string& traderName, const std::string& traderAccountNumber, float traderBalance)
        : name(traderName), accountNumber(traderAccountNumber), balance(traderBalance)
    {
        std::cout << "Constructor called for " << name << std::endl;
    }

    // Destructor
    ~TraderAccount()
    {
        std::cout << "Destructor called for " << name << std::endl;
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
    TraderAccount trader1("John Doe", "123456789", 1000.0);

    std::cout << "Displaying Information for trader 1:" << std::endl;
    trader1.printInfo();

    TraderAccount trader2("Jane Smith", "987654321", 5000.0);

    std::cout << "Displaying Information for trader 2:" << std::endl;
    trader2.printInfo();

    return 0;
}
