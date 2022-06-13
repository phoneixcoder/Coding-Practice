#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter length of the array: ";
    cin>>n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int x, pos;
    cout<<endl<<"Enter value and Position: ";
    cin>>x>>pos;
    
    n++;

    for (int i = n - 1; i >= 0; i--)
    {
        if (pos < i)
        {
            arr[i] = arr[i-1];
        }
        else if (pos == i)
        {
            arr[pos] = x;
        }
        else{
            arr[n-1] = x;
        }
    }
    cout<<"Updated Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"Enter value to delete: ";
    cin>>x;
    int delpos = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            delpos = i;
            break;
        }
        else{
            cout<<"\nInvalid Number."<<endl;
            return 0;
        }
    }
    
    for (int i = delpos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    

    return 0;
}
