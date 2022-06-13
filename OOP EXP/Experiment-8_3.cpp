#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<"Base Class"<<endl;
    }
};

class Derived : public Base{
    public:
    void show(){
        cout<<"Derived Class"<<endl;
    }
};

int main(){
    Base *ptr[2];
    Derived d1,d2;
    ptr[0] = &d1;
    ptr[1] = &d2;
    ptr[0] -> show();
    ptr[1] -> show();
    return 0;
}