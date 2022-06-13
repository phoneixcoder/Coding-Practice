#include<stdio.h>>

int main(){
    int num;
    scanf("%d" , num);

    int temp = num;
    int store = 0;

    while (temp != 0)
    {
        int r = r % 10;
        store = store + (r * r * r);
        temp = temp/10;
    }
    if (num == store)
    {
        printf("Yes !");
    }else{
        printf("NO !");
    }

    return 0;
        

}