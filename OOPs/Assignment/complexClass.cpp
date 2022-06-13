#include <iostream>
using namespace std;

class Complex
{
private:
    int realPart;
    int complexPart;

public:
    Complex()
    {
        realPart = 0;
        complexPart = 0;
    }

    Complex(int realPart, int complexPart)
    {
        this->realPart = realPart;
        this->complexPart = complexPart;
    }

    void setValue()
    {
        int realPart, complexPart;

        cout << "Enter real part: ";
        cin >> realPart;
        cout << endl;
        cout << "Enter imaginary part: ";
        cin >> complexPart;
        cout << endl;

        this->realPart = realPart;
        this->complexPart = complexPart;
    }

    void sum(Complex number1, Complex number2)
    {
        this->complexPart = number1.complexPart + number2.complexPart;

        this->realPart = number1.realPart + number2.realPart;

        return;
    }
    void subtract(Complex number1, Complex number2)
    {
        this->complexPart = number1.complexPart - number2.complexPart;

        // if (this->complexPart < 0)
        // {
        //     this->complexPart *= -1;
        // }

        this->realPart = number1.realPart + number2.realPart;

        // if (this->realPart < 0)
        // {
        //     this->realPart *= -1;
        // }

        return;
    }

    void multiply(Complex number1, Complex number2)
    {

        this->realPart = (number1.realPart * number2.realPart) - (number1.complexPart * number2.complexPart);

        this->complexPart = (number1.realPart * number2.complexPart) + (number2.realPart * number1.complexPart);

        return;
    }

    void print()
    {
        cout << this->realPart << " + " << this->complexPart << "i" << endl;

        return;
    }
};

int main()
{
    Complex number1 = Complex();
    number1.setValue();
    number1.print();

    int realPart, complexPart;

    cout << "Enter real part: ";
    cin >> realPart;
    cout << endl;
    cout << "Enter imaginary part: ";
    cin >> complexPart;
    cout << endl;

    Complex number2 = Complex(realPart, complexPart);
    number2.print();

    Complex number4 = Complex();
    number4.sum(number1, number2);

    Complex number3 = Complex();

    number3.multiply(number1, number2);
    number3.print();

    return 0;
}