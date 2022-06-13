#include<iostream>

using namespace std;

int getithbit(int n, int i){
    n = n >> i;
    if (n & 1)
    {
        return 1;
    }else{
        return 0;
    }
}

void clearithbit(int n, int i){
    int mask = ~(1 << i);
    n = n & mask;
}

int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;

    cout<<getithbit(n, i)<<endl;

    return 0;
}