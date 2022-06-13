#include<iostream>
using namespace std; 
int main(){
    int row = 5;
    int i = 1;
    while(i <= 5){
        int j =1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}