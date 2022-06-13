#include <stdio.h>
#include <string.h>
#define SIZE 100

struct bookdetail
{
    char bookName[25];
    int bookNumber;
    float bookPrice;
};

void main()
{
    struct bookdetail bookArray[SIZE];

    int num, i;
    printf("Enter the Numbers of Books:");
    scanf("%d", &num);
    printf("\n");
    for (i = 0; i < num; i++)

    {

        printf(" =:Book %d Detail:=\n", i + 1);

        printf("\nEnter the Book Name:\n");
        scanf("%s", bookArray[i].bookName);

        printf("Enter the Book Number:\n");
        scanf("%d", bookArray[i].bookNumber);

        printf("Enter the Price of Book:\n");
        scanf("%f", &bookArray[i].bookPrice);
    }

    output(bookArray, num);
}

void output(struct bookdetail v[], int n)

{

    int i, t = 1;
    int c = 0;
    for (i = 0; i < n; i++, t++)

    {
        if (v[i].bookPrice >= 500 && v[i].bookPrice <= 1000)
        {
            printf("\n");

            printf("Book No.%d\n", t);

            printf("Book %d Name is=%s \n", t, v[i].bookName);

            printf("Book %d Number is=%d \n", t, v[i].bookNumber);

            printf("Book %d Price is=%f \n", t, v[i].bookPrice);

            printf("\n");
            c++;
        }
    }
    if (c == 0)
    {
        printf("No data");
    }

    // Saving in file:
    FILE *outfile;
    char filename[100];

    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);

    outfile = fopen(filename, "w");

    if (fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");
    for (i = 0; i < n; i++, t++)
    {
        if (v[i].bookPrice >= 500 && v[i].bookPrice <= 1000)
        {
            
        }
    }
    // close file
    fclose(outfile);
}