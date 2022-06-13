#include <stdio.h>
struct book
{
    char name;
    float price;
    int number;
};

struct myLibrary
{
    struct book b;
};

void updateValue(struct book b)
{
    printf("\nEnter names, prices & no. of pages of 3 books\n");
    scanf("%c %f %d", &b.name, &b.price, &b.number);
    scanf("%c %f %d", &b.name, &b.price, &b.number);
    scanf("%c %f %d", &b.name, &b.price, &b.number);
}

main()
{

    struct myLibrary content[100];
    int size;
    printf("Enter Number of Books: \n");
    for (int i = 0; i < size; i++)
    {
        content[i];    
    }
}