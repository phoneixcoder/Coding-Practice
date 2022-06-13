#include<iostream>

using namespace std;

int main(){
    int arr[5];
    // for(int i = 0; i < 5; i++)
    for (int i = 0; i <= 4; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        // sum += arr[i];
        sum = sum + arr[i];
    }
    
    cout<<"Sum: "<<sum<<endl;

    return 0;
}