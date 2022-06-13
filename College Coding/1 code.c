#include<stdio.h>
#include<conio.h>
void main()
{
	int A,B,yes,no;
	printf("enter the two no.");
	scanf("%d%d",&A,&B);
	if(A>B)
	{
		if(A>10)
		{
		   	printf("%d",yes);	
		}
	
	}
	else if(A<B)
	{
		if(B>10)
		{
			printf("%d",yes);
		}
		
	}
	else
	{
		printf("%d",no);
	}
	getch();
}
