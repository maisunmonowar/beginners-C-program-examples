#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float marks;

    printf("Enter information for student 1:\n");

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks: ");
    scanf("%f", &marks);

    char name2[50];
    int roll2;
    float marks2;

    printf("Enter information for student 2:\n");

    printf("Enter name: ");
    scanf("%s", name2);

    printf("Enter roll number: ");
    scanf("%d", &roll2);

    printf("Enter marks: ");
    scanf("%f", &marks2);

    printf("Displaying Information for student 1:\n");

    printf("Name: %s\n", name);

    printf("Roll number: %d\n", roll);

    printf("Marks: %.1f\n", marks);

    printf("Displaying Information for student 2:\n");

    printf("Name: %s\n", name2);

    printf("Roll number: %d\n", roll2);

    printf("Marks: %.1f\n", marks2);

    return 0;
}
