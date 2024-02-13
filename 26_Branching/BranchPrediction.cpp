#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <climits>
#include <array>

int main() {

    const uint16_t SIZE = 0xffff; 
    std::array<uint8_t, SIZE> numbers;

    // Generate random numbers between 0 and 100
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it = std::rand() % 101;
    }

    // Count the numbers below 50
    int count = 0;
    auto start = std::chrono::high_resolution_clock::now();
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it < 50) {
            count++;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    // Print the count and time taken
    std::cout << "\nCount of numbers below 50: " << count << std::endl;
    std::cout << "Time taken: " << duration.count() << " microseconds" << std::endl;
    
    // Sort the array
    std::sort(std::begin(numbers), std::end(numbers));

    // Count the numbers below 50
    count = 0;
    start = std::chrono::high_resolution_clock::now();
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it < 50) {
            count++;
        }
    }
    end = std::chrono::high_resolution_clock::now();
    auto durationAfterSort = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    // Print the count and time taken
    std::cout << "\nCount of numbers below 50 after sorting: " << count << std::endl;
    std::cout << "Time taken after sorting: " << durationAfterSort.count() << " microseconds" << std::endl;

    return 0;
}