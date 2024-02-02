#include <stdio.h>
#include <stdint.h>

void passByValue(uint8_t a)
{
    printf("Inside passByValue, a = %d\n", a);
    a = 5;
    printf("Inside passByValue, a = %d\n", a);
}
void passByRef(uint8_t *a)
{
    printf("Inside passByRef, a = %d\n", *a);
    *a = 10;
    printf("Inside passByRef, a = %d\n", *a);
}

void main(){
    uint8_t a = 20;
    printf("before doing anything a = %d\n", a);
    passByValue(a);
    printf("back in main a = %d\n", a);
    passByRef(&a);
    printf("After second function call, a = %d\n", a);
}