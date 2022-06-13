#include<iostream>

using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    return;
}


int sum(int x, int y = 10){
    return x+y;
}

int main(){
    int a = 5;
    int b = 6;
    cout<<a<<" "<<b<<" ";
    swap(a,b);
    cout<<sum(a)<<endl;
    cout<<a<<" "<<b;
    return 0;
}