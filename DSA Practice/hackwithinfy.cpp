#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int *arr2 = new int[n];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i-1])
            {
                arr2[arr[i-1]] += 1;
            }
        }
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            maxi = max(arr2[i],arr2[maxi]); 
        }
        cout<<maxi<<endl;
        delete [] arr;
        delete [] arr2;
    }
    return 0;
}