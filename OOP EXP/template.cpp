#include<iostream>

using namespace std;

template <class T>

class Sum{
    T a 
    T b;
    public:
    Sum(){
        a = -1;
        b = 1;
    }
    void setNum(T a, T b){
        this -> a = a;
        this -> b = b;
    }
    void printSum(){
        T su = 0;
        su = a+b;
        cout<<su<<endl;
    }
};


int main(){
    
    Sum <float>s;
    s.setNum(5.5,10.5);
    s.printSum();
    return 0;
}