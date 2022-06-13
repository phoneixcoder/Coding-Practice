#include<stdio.h>
void main()
{
	int fact,num=1;
	printf("enter the number: ");
	scanf("%d",&fact);
	while(fact!=0)
	{
		num=num*fact;
		fact--;
	}
	printf("%d",num);
}
