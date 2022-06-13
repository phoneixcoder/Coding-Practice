#include <stdio.h>
#include <string.h>
#define SIZE 20

struct bookdetail
{
    char name_of_book[20];
    int book_number;
    float price_of_book;
};

void output(struct bookdetail w[], int n);

void main()
{
    struct bookdetail b[SIZE];

    int num, a;
    printf("Enter the Numbers of Books:");
    scanf("%d", &num);
    printf("\n");
    for (a = 0; a < num; a++)

    {

        printf("\t=:Book %d Detail:=\n", a + 1);

        printf("\nEnter the Book Name:\n");
        scanf("%s", b[a].name_of_book);

        printf("Enter the Book Number:\n");
        scanf("%d", &b[a].book_number);

        printf("Enter the Price of Book:\n");
        scanf("%f", &b[a].price_of_book);
    }

    output(b, num);
}

void output(struct bookdetail w[], int n)

{

    int a, t = 1;
    int c = 0;
    for (a = 0; a < n; a++, t++)

    {
        if (w[a].price_of_book >= 500 && w[a].price_of_book <= 1000)
        {
            FILE *ft;
            ft = fopen("a.txt" , "w");
            fwrite(&w , n , 1 , ft);
            if(fwrite != 0){
                printf("Great success.");
            }
            else{
                printf("Unsuccessfull.");
            }
            fclose (ft);
        }
        c++;
    }
    if (c == 0)
    {
        printf("No data");
    }
    
}