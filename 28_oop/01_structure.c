#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s, s2;

int main()
{
    printf("Enter information for student 1:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Enter information for student 2:\n");

    printf("Enter name: ");
    scanf("%s", s2.name);

    printf("Enter roll number: ");
    scanf("%d", &s2.roll);

    printf("Enter marks: ");
    scanf("%f", &s2.marks);

    printf("Displaying Information for student 1:\n");

    printf("Name: ");
    puts(s.name);

    printf("Roll number: %d\n", s.roll);

    printf("Marks: %.1f\n", s.marks);

    printf("Displaying Information for student 2:\n");

    printf("Name: ");
    puts(s2.name);

    printf("Roll number: %d\n", s2.roll);

    printf("Marks: %.1f\n", s2.marks);

    return 0;
}
