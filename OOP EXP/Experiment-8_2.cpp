#include<iostream>
#include<process.h>
#define MAX 5

using namespace std;

class Stack{
    protected:
    int stack[MAX];
    int top;
    public:
    Stack(){
        top = -1;
    }
    void push(int a){
        stack[++top] = a;
    }
    int pop(){
        return stack[top--];
    }
};

class myStack : public Stack{
    public:
    void push(int a){
        if (top > MAX -1)
        {
            cout<<"Warning!!"<<endl;
            exit(1);
        }
        Stack :: push(a);
    }
    int pop(){
        if (top == -1)
        {
            cout<<"Warning!!"<<endl;
            exit(1);
        }
        return Stack :: pop();
    }
};

int main(){
    myStack stack;
    stack.push(11);
    stack.push(22);
    stack.push(33);
    cout<<stack.pop()<<endl;    
    stack.push(44);
    stack.push(55);
    cout<<stack.pop()<<endl;
    cout<<stack.pop()<<endl;
    cout<<stack.pop()<<endl;
    cout<<stack.pop()<<endl;
    cout<<stack.pop()<<endl;
    cout<<stack.pop()<<endl;
    return 0;
}