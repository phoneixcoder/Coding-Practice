#include <stdio.h>
void main()
{
    char name[20];
    int age;
    int class;
    int rollNumber;

    printf("Enter your age: \n");
    scanf("%s", &name);

    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Enter your class: \n");
    scanf("%d", &class);

    printf("Enter your rollNumber: \n");
    scanf("%d", &rollNumber);

    printf("Name: %s", name);
    printf("\nage: %d", age);
    printf("\nClass: %d", class);
    printf("\nRoll NUmber: %d", rollNumber);
}
