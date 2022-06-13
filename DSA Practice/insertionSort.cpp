#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && curr < arr[prev])
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = curr;
    }
    return;
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(int);
    
    insertionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
            cout<<arr[i]<<" ";
    }
    
    return 0;
}