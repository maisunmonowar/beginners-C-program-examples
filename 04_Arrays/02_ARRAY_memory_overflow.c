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

   
   // change the 5th element
    arr[10] = 100;

   
    // print the array again
    printf("\n");
    for (int i = 0; i < MAX +2; i++)
    {
        printf("%d ", arr[i]);
    }

   return 0;
}
