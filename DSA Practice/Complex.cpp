#include<iostream>

using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        Complex(){
            real = 0;
            img = 0;
        }
        Complex(int real, int img){
            this -> real = real;
            this -> img = img;
        }
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
    Complex operator+(Complex C){
        Complex sum;
        sum.real = this -> real + C.real;
        sum.img = this -> img + C.img;
        return sum;
    }
};

int main(){
    Complex c1(5,6);
    Complex c2(10,20);

    c1.display();
    c2.display();

    Complex sum;
    sum = c1 + c2;
    
    sum.display();
    return 0;
}