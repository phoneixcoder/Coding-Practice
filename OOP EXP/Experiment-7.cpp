#include<iostream>

using namespace std;

class Complex{
    private:
        int real;
        int img;
        static int count;
    public:
        Complex(){
            real = 0;
            img = 0;
        }
        Complex(int real, int img){
            this -> real = real;
            this -> img = img;
        }
        void setData(int real, int img){
            this -> real = real;
            this -> img =img;
        }
        void printComplex(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        friend Complex addComplex(Complex, Complex);

        Complex operator+(Complex c2){
            Complex temp;
            temp.real = this -> real + c2.real;
            temp.img = this -> img + c2.img;
            return temp;
        }
};



Complex addComplex(Complex c1, Complex c2){
    Complex c3;
    c3.setData((c1.real + c2.real), (c1.img + c2.img));
    return c3;
}

int main(){
    Complex c1 (1, 4), c2, c3;
    int x=4,y=3, z= x+y;
    c2.setData(4, 5);
    c3 = addComplex(c1, c2);
    c3 = c1 + c2;
    return 0;
}