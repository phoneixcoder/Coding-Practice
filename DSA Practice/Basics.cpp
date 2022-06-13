#include<iostream>

using namespace std;
#define pi 3.16

float area(int a){
    return pi*a*a;
}

int main(){
    int a;
    a = 10;
    const int b = 20;
    
    cout<<area(a)<<endl;
    return 0;
}