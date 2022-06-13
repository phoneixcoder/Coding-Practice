#include<stdio.h>
#include<math.h>
int main(){
    int num;
    scanf("%d" , &num);
    int temp = num;
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp = temp/10;
    }

    temp = num;
    int sum =0;
    while (temp != 0)
    {
        int r = temp % 10;
        sum = sum + pow(r , count);
        temp = temp/10;
    }
    
    if (num == sum)
    {
        printf("YES !");
    }
    else{
        printf("NO !");
    }

    return 0;
}