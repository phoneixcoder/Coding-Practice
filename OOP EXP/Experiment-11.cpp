#include<iostream>
using namespace std;

template<class T>
T abs (T n){
    return (n > 0)? -n:n;
};

int main(){
    int a = 5;
    int b = -6;

    cout<<"Value of a is "<<abs(a)<<endl;  
    cout<<"Value of b is "<<abs(b)<<endl;  
    return 0;
}