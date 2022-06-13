#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum= -99999;
    int currsum=0;

    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<maxsum;
    return 0;
}