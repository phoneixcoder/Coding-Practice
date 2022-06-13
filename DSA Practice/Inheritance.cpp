#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    private:
        string name = "Polo";

    protected:
        string brand = "Volkswagon";

    public:
        void honk(){
            cout<<"Buzzzzz!!!!"<<endl;
        }
};

class Cars : private Vehicle{
    public:
        void change(){
            brand = "maruti";
            name = "alto"
        }

        string model = "hatchback";
        void horn(){
            this -> honk();
        }
};

int main(){
    
    Cars mycar;
    mycar.honk();

    return 0;
}