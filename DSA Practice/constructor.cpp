#include<iostream>

using namespace std;

class Employee{
    private:
        int id;
        char *name;
    public:
        Employee(){
            id = 0;
            name = new char[25];
        }
        Employee(int id, char* name){
            this -> id = id;
            this -> name = name;
        }
        void setId(int id){
            this -> id = id;
        }
        void setName(char *name){
            this -> name = name;
        }
        void print(){
            cout<<"Id: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
        }
};

int main(){
    Employee emp1;
    emp1.setId(1);
    emp1.setName("Divyanshi");
    emp1.print();

    Employee emp2(2, "Tilak");
    emp2.print();
    return 0;
}