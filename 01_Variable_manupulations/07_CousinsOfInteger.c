#include<stdio.h>
#include<stdint.h>

void main()
{ 
    uint8_t a    = 0xFF;
    uint16_t b   = 0xFF;

    a = a + 1;
    b = b + 1;

    printf("a = %u\n", a);
    printf("b = %u\n\n", b);



//     int8_t
// int16_t
// int32_t
// int64_t
// uint8_t
// uint16_t
// uint32_t
// uint64_t
    

    // Variable overflow
    uint16_t c = 0xFFFF;
    a = c;
    printf("a = %u\n", a);
    printf("c = %u\n", c);
}
