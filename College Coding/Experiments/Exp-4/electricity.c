#include<stdio.h>
void main()
{
	float total,unit1,unit2;
	printf("enter the two units");
	scanf("%f%f",&unit1,&unit2);
	total=unit2-unit1;
	printf("actual unit = %f\n",total);
	if(total<=100 && total>=0)
	{
		printf("2rs/unit");
	}
	else if(total>100&&total<200)
	{
		printf("3rs/unit");
	}
	else if(total>200&&total<=300)
	{
		printf("4rs/unit");
	}
	else
	{
		printf("5rs/unit");	
	}
}
