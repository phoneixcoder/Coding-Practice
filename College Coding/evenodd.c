#include<stdio.h>
int main()
{
    int num ;
    printf("Enter the Number : ");
    scanf("%d", &num);
    switch (num%2)
    {
     case 0:
     printf("Your number is even");
     break;
     case 1:
     printf("Your number is odd");
     break;
     default:printf("Enter a valid number");
     break;
    }
}
