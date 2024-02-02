#include <stdio.h>

int main() {
    int num = 5; // The number to be doubled

    // Doubling the number using left shift operator
    int doubledNum = num << 1;

    printf("Original number (decimal): %d\n", num);
    printf("Original number (hexadecimal): %x\n", num);
    printf("Doubled number (decimal): %d\n", doubledNum);
    printf("Doubled number (hexadecimal): %x\n\n", doubledNum);

    // Halving the number using right shift operator
    int halvedNum = num >> 1;

    printf("Original number (decimal): %d\n", num);
    printf("Original number (hexadecimal): %x\n", num);
    printf("Halved number (decimal): %d\n", halvedNum);
    printf("Halved number (hexadecimal): %x\n", halvedNum);
    
    
    return 0;
}
