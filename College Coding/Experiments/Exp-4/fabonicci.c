#include<stdio.h>
void main()
{
	int n,i,a=-1,b=1;
    printf("\n\n------------------------------\n\n");
    printf("Enter how many number you want to print : ");
    scanf("%d",&n);
    printf("The series upto %d is : \n",n);
    while(n>0)
    {
       i=a+b;
        a=b;
        b=i;
        printf(" \n%d",i);
        n--; 

    }
    printf("\n\n------------------------------\n\n");
}
