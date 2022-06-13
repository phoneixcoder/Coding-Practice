#include<iostream>
using namespace std;
template <class T>
int find (T* array, T value, int size){
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
};

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int result = find(arr, 100, 10);
    if (result != -1)
    {
        cout<<"Element Found at: "<<result<<endl;
    }else{
        cout<<"Not found!!"<<endl;
    }
    return 0;
}