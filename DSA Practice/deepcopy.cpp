#include<iostream>

using namespace std;

class Deep{
    int *a;
    int *b;
    public:
        Deep(){
            a = new int;
            b = new int;
        }

        // Deep(Deep &obj){
        //     a = new int;
        //     *a = (*obj.a);
        //     b = new int;
        //     *b = (*obj.b);
        // }
        void setValue(int a, int b){
            *(this -> a) = a;
            *(this -> b) = b;
        }

        void getValue(){
            cout<<*a<<" "<<*b;
            cout<<endl;
        }
};  

int main(){
    Deep obj1;
    obj1.setValue(5,6);

    Deep obj2(obj1);
    Deep obj3 = obj2;


    obj1.getValue();
    obj2.getValue();
    obj3.getValue();

    obj2.setValue(10,20);

    obj1.getValue();
    obj2.getValue();
    obj3.getValue();

    return 0;
}