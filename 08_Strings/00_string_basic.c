#include <stdio.h>

int main() {
    // Declare a string variable
    char str[] = "Hello, World!";

    // Print the string
    printf("%s\n", str);

    // String is basically an array of characters
    printf("%p\n", str);
    int i = 0;
    while ( str[i] != '\0' )
    {
        printf("%c ", str[i]);
        i++;
    }



    // we can change any character of the string
    str[7] = 'm';

    printf("\n%s\n", str);

    // char is actually a number. ASCII
    printf("Actuall, char is a number\n");
    str[7] = 69;
    str[8] = 97;
    str[9] = 114;
    str[10] = 116;
    str[11] = 104;

    printf("%s\n", str);

    printf("null character signifies the end of the string\n");

    str[5] = '\0';

    printf("%s\n", str);

    return 0;
}
