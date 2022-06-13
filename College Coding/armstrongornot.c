#include<stdio.h>
void main()
{
	int a,i,n,armstrong,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	armstrong=n;
	for(i=1;n>0;i++)
	{
		a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
	}
	printf("%d\n",sum);
	if(armstrong==sum)
	{
		printf("it is armstrong number");
	}
	else
	{
		printf("it is not armstrong number");
	}
}
