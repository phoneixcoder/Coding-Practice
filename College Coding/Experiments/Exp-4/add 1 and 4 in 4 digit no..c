#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	printf("enter the four digit no.");
	scanf("%d",&a);
	b=a/1000;
	a=a%1000;
	c=a/100;
	a=a%100;
	d=a/10;
	a=a%10;
	e=a;
	f=b+e;
	printf("sum of 4th and 1st no.%d",f);
}
