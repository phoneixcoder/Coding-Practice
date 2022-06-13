#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,real;
	printf("enter the three digit no.");
	scanf("%d",&a);
	real=a;
	b=a/100;
	a=a%100;
	c=a/10;
	a=a%10;
	d=a;
	e=b*b*b+c*c*c+d*d*d;
	if(real==e)
	{
		printf("it is armstrong no.");
	}
	else
	{
	    printf("it is not armstrong no.");	
	}	
}
