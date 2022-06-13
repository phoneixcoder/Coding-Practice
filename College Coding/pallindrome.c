#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    int temp = num;
    int reverse = 0;
    while (temp != 0)
    {
        int r = temp % 10;
        reverse = reverse * 10 + r;
        temp = temp/10;
    }
    if (reverse == num)
    {
        printf("Yes ! Pallindrome.");
    }else{
        printf("No ! Not Pallindrome.");
    }
    
    return 0;
}