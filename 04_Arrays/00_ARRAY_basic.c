//ARRAY simple operations
#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int arr[MAX];

int main(){
    //initialize the array
    for (int i = 10; i > 0; i--)
    {
        arr[i-1] = i;
    }


    //print the array
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);
    }

    //print the address of the array
    printf("\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%p ", arr+i);
    }

   return 0;
}
