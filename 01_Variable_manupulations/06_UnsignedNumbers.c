#include<stdio.h>

void main()
{ 
    signed int a    = 2147483647;
    unsigned int b  = 2147483647;

    a = a + 1;
    b = b + 1;

    
    // if (a == -2147483648)
    // {
    //     printf("The Value of a is -2147483648\n");
    // }
    // else
    // {
    //     printf("The Value of a is not -2147483648\n");
    // }

    // if (b == 2147483648)
    // {
    //     printf("The Value of b is 2147483648\n");
    // }
    // else
    // {
    //     printf("The Value of b is not 2147483648\n");
    // }

    // printf("The value of a is %d\n", a);
    // printf("The value of b is %d\n\n", b);

    // printf("The value of a is %u\n", a);
    // printf("The value of b is %u\n\n", b);


    // printf("The ACTUAL value of a is %d\n", a);
    // printf("The ACTUAL value of b is %u\n", b);
}
