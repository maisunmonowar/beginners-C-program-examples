#include <stdio.h>

int main(){

    int n = 1;

    do 
    {
        printf("%d\n", n);
        n++;
    } while (n <= 5);
    
    printf("again...\n");
    do 
    {
        printf("%d\n", n);
        n++;
    } while (n <= 5);

    printf("again...\n");
    while ( n <= 5 )
    {
        printf("%d\n", n);
        n++;
    }
    
    return 0;
}
