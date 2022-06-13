#include<stdio.h>

int main(){
    int a,b;
    scanf("%d" ,&a);
    scanf("%d" ,&b);
    int r = a%b;
    int q = a/b;

    printf("%d" , r , "\n");
    printf("%d" , q);

    return 0;
}