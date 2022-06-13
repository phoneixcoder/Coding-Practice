#include<stdio.h>
#include<string.h>
int main(){
    char st[100];
    scanf("%s" , &st);
    char st2[100];
    strcpy(st , st2);

    strrev(st2);

    if (strcmp(st , st2))
    {
        printf("Pallindrome !");
    }
    else{
        printf("Not Pallindrome !");
    }
    
    return 0;
}