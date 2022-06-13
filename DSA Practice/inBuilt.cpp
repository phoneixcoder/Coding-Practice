#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 8};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr + n);
    
     return 0;
}