#include<iostream>
using namespace std;

void countSort(int arr[], int n){
    int size = -99999;
    for (int i = 0; i < n; i++)
    {
        if (size < arr[i])
        {
            size = arr[i];
        }
    }

    int *countArr = new int[size];
    for (int i = 0; i <= size; i++)
    {
        countArr[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        countArr[arr[i]] += 1;
    }
    
    int k = 0;
    for (int i = 0; i <= size; i++)
    {
        if(countArr[i] != 0){
            while (countArr[i])
            {
                arr[k] = i;
                countArr[i]--;
                k++;
            }
        }
    }
    
    return;
}

int main(){
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(arr)/sizeof(int);
    countSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}