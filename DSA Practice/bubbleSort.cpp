#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }   
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(int);

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}