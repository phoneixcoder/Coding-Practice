#include<stdio.h>
int main()
{
	float a,b;
	int x;
	printf("press 1 for addition\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for modulas\n");
    scanf("%d",&x);
    if(x==1||x==2||x==3||x==4)
    {
    printf("enter the number a\n");
    scanf("%f",&a);
    printf("enter the no. b\n");
    scanf("%f",&b);
    switch(x)
    {
    	case 1:printf("addition:- %f",a+b);
               break;
        case 2:printf("substraction:- %f",a-b);
               break;
        case 3:printf("multiplication:- %f",a*b);
               break;
        case 4:printf("division:- %f",a/b);
               break;
    }
   }
    else if(x==5)
    {
     int a,b;
     printf("enter the two no.");
     scanf("%d%d",&a,&b);
    printf("Modulas:- %d",a%b);
	}
	else
	  printf("wrong choise");
    
    
}
