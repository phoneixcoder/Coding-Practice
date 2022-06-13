#include<iostream>

using namespace std;

class Stack{
    int *s;
    int max; 
    int top;
    public:
    class full{};
    class empty{};
    Stack(int m){
        s = new int[m];
        top = -1;
        max = m;
    }    
    void push(int a){
        if (top < max)
        {
            s[++top] = a;
        }
        else{
            throw full();
        }
    }
    int pop(){
        if (top >= 0)
        {
            return s[top--];
        }
        else{
            throw empty();
        }
    }
};

int main(){
    int item, size;
    int ch = 1;
    cout<<"Enter the item to push: ";
    cin>>item;
    Stack s1(10);
    try
    {
        s1.push(item);
    }
    catch(Stack :: full)
    {
        cout<<"\nStack Overflow"<<endl;
    }
    try
    {
        cout<<"Popped Item is"<<s1.pop()<<endl;
    }
    catch(Stack :: empty)
    {
        cout<<"Stack underflow"<<endl;
    }
    
    return 0;
}