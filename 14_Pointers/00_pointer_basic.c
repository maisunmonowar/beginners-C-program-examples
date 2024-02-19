#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; // ptr will only hold and address. An address which will have an integer value. 

    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num); // we are printing the pointer. AKA address of num
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr); 


    printf("\n\nWe can use pointers to change the value of num\n");
    *ptr = 20;
    printf("Value of num: %d\n", num);

    return 0;
}
