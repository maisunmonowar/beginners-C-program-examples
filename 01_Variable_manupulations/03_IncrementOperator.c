// Increment operator

#include<stdio.h>
int main()
{
    int a= 5, b, c;
    b = a++;  // b = 5, a = 6
    c = ++a;  // b = 7, a = 7

    printf("Value of b = %d\n Value of c = %d\n", b,c);
    return 0;
}
