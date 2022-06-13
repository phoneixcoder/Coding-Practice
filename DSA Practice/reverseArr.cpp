#include<iostream>

using namespace std;

void reverseArray(int arr[], int n){
    int start = 0, end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return;
}

void printArray(int arr[], int n){
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr, n);

    reverseArray(arr, n);

    printArray(arr, n);

    return 0;
}
