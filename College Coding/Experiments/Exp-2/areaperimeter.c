#include<stdio.h>
void main()
{
	int ln,br,area,perimeter;
	printf("enter the length and breadth");
	scanf("%d%d",&ln,&br);
	area=(ln*br);
	perimeter=(ln+br)*2;
	printf("%d", area);
	printf("%d", perimeter);
	if(area>perimeter)
	{
		printf("area is greater");
	}
	else
	{
		printf("perimeter is greater");
	}
}
