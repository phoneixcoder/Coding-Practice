#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the first no.\n");
    scanf("%d",&a);
    printf("enter the second no.\n");
    scanf("%d",&b);
    if(a%b==0)
    {
    	printf("it is divisible");
	}
	else
	{
		printf("it is not divsible");
	}
}
