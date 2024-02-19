//ARRAY simple operations
#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int arr[MAX];

int main(){
    //initialize the array
    for (int i = 9; i >= 0; i--)
    {
        arr[i] = i+1;
    }


    //print the array
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);
    }

   
   // change the 5th element
    arr[4] = 100;

    // change the 6th element
    *(arr+5) = 200;

    // print the array again
    printf("\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);
    }

   return 0;
}
