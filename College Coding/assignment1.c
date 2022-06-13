#include<stdio.h>
void main()
{
   int age,rollno;
   char name[20];
   char section[4];
   printf("enter your name");
   gets(name);
   printf("%s\n",name);
   printf("enter your roll no.");
   scanf("%d",&rollno);
   printf("roll no. %d\n",rollno);
   printf("enter your age");
   scanf("%d",&age);
   printf("your age %d\n",age);
   printf("enter section");
   scanf("%s",&section);
   printf("your section %s",section);
}
