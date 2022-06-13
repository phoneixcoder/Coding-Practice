#include<stdio.h>

int main(){
    int a ; int b;
    scanf("%d",&a);
    scanf("%d",&b);

    int temp = a;
    a = b;
    b = temp;

    printf("%d" , a); 
    printf("\n%d" , b);

}