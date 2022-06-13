#include<iostream>
using namespace std;
const int MAX = 3;
class Stack{
    int *stack = new int[MAX];
    int top;
    public:
    class full{
    };
    class empty{
    };
    Stack(){
        top = -1;
    }
    void Push(int n){
        if (top >= MAX -1)
        {
            throw full();
        }
        stack[++top] = n;
        return;
    }

    int Pop(){
        if (top == -1)
        {
            throw empty();
        }
        return stack[top--];
    }
};

int main(){
    Stack s1;
    try
    {
        s1.Push(1);
        s1.Push(2);
        s1.Push(3);
        s1.Pop();
        s1.Pop();
        s1.Pop();
        s1.Pop();
    }
    catch(Stack::full)
    {
        cout<<"Stack overflow."<<endl;
    }
    catch(Stack::empty){
        cout<<"Stack Underflow"<<endl;
    }
    return 0;
}