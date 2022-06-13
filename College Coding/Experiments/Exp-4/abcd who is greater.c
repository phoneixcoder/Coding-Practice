#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the 4 no.\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	{
			printf("a is greater\n");
	}
	else if(b>c&&b>d)
	{
		printf("b is greater\n");
	}
	else if(c>d)
	{
		printf("c is greater");
	}
	else
	{
		printf("d is greater");
	}
}
