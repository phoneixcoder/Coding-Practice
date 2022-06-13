#include <stdio.h>
#include <string.h>
#define SIZE 20

struct bookdetail
{
    char name[20];
    int number;
    float price;
};

void output(struct bookdetail v[], int n);

void main()
{
    struct bookdetail b[SIZE];

    int num, i;
    printf("Enter the Numbers of Books:");
    scanf("%d", &num);
    printf("\n");
    for (i = 0; i < num; i++)

    {

        printf("\t=:Book %d Detail:=\n", i + 1);

        printf("\nEnter the Book Name:\n");
        scanf("%s", b[i].name);

        printf("Enter the Book Number:\n");
        scanf("%d", b[i].number);

        printf("Enter the Price of Book:\n");
        scanf("%f", &b[i].price);
    }

    output(b, num);
}

void output(struct bookdetail v[], int n)

{

    int i, t = 1;
    int c = 0;
    for (i = 0; i < n; i++, t++)

    {
        if (v[i].price >= 500 && v[i].price <= 1000)
        {
            printf("\n");

            printf("Book No.%d\n", t);

            printf("\t\tBook %d Name is=%s \n", t, v[i].name);

            printf("\t\tBook %d Number is=%d \n", t, v[i].number);

            printf("\t\tBook %d Price is=%f \n", t, v[i].price);

            printf("\n");
            c++;
        }
    }
    if (c == 0)
    {
        printf("No data");
    }
    
}