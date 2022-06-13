#include<stdio.h>
void main()
{
	char name[20];
	int rollno,p,c,m,total;
	float per;
	printf("enter the name");
	gets(name);
	printf("enter the roll no.");
	scanf("%d",&rollno);
	printf("enter the marks of pcm");
	scanf("%d%d%d",&p,&c,&m);
	total=p+c+m;
	per=(float)total/3;
	printf("name%s\n",name);
	printf("roll no.%d\n",rollno);
	printf("marks in physics%d\n",p);
	printf("marks in chemistry%d\n",c);
	printf("marks in maths%d\n",m);
	printf("total marks%d\n",total);
	printf("percentage %f",per);
	
}
