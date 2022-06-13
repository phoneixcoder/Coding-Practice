#include<stdio.h>
#include<stdlib.h>

int linearSearch(int* arr, int x, int n){
    int i = 0;
    while (i)
    {
        if (i >= n)
        {
            printf("Element not found.");
            return -1;
        }else if (arr[i] == x)
        {
            printf("Element found.");
            return i;
        }
        i++;
    }
    
    
}

int main(){
    int n;

    printf("Enter lenght of the array: ");
    scanf("%d",&n);
    printf("\n");

    int *arr = (int*) malloc (sizeof(n));

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter number you want to search: ");
    scanf("%d", &x);
    printf("\n");

    int index = linearSearch(arr, x, n);

    printf("\n%d",&index);
    return 0;
}