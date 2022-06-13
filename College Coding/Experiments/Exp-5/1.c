#include<stdio.h>
void main()
{
 int n1,n2,n3,n4,i,n;
 printf("enter the value of three number n1,n2,n3,n4");
 scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
 printf("enter the value of number n");
 scanf("%d",&n);
 for(i=1 ;i<=n ;i++)
 {
 	n1++;
 	n2 = ++n2;
 	n3--;
 	n4 = --n4;

 printf("the value of n1 is = %d", n1);
 printf("the value of n2 is = %d", n2);
 printf("the value of n3 is = %d", n3);
 printf("the value of n4 is = %d", n4);
 }
}
