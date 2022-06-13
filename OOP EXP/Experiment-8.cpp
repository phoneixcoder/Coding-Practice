#include<iostream>
#define MAX 5
using namespace std;

class Stack{
    int stack[MAX];
    public:
        int top;
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
            if (top > MAX - 1)
            {
                cout<<"Stack Overflow"<<endl;
                exit(1);
            }
            Stack::push(a);
        }
        int pop(){
           if (top < 0)
           {
               cout<<"Stack underflow"<<endl;
               exit(1);
           }
            return Stack :: pop();
        }
};

int main(){
    myStack s;
    s.push(11);
    s.push(22);
    s.push(33);
    cout<<s.pop()<<endl;
    s.push(44);
    s.push(55);

    return 0;
}
