#include<bits/stdc++.h>

using namespace std;

int mai(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int * arr = new int [n];
        int len = n; int i = 1;
        arr[0] = n;
        while(i < n){
            arr[i] = i;
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    return 0;
}