#include<iostream>
#include<string>
using namespace std;

class Employe{

    public:
        int id;
        float salary;
        char *designation;
        Employe(){
            id = 0;
            salary = 0;
            designation = new char[20];
        }

        Employe(int id, float salary, char *designation){
            this -> id = id;
            this -> salary = salary;
            this -> designation = designation;
        }

        Employe(Employe &obj){
            this -> id = obj.id;
            this -> salary = obj.salary;
            //this -> designation = designation; ----- Shallow Copy
            this -> designation = new char[20]; //------ Deep Copy
            this -> designation = designation; 
        }

        void display(){
            cout<<"ID: "<<id<<" ";
            cout<<"Salary: "<<salary<<endl;
        }
};

int main(){

    Employe Divyanshi(1, 5000);
    Employe Tilak(2, 3000);
    Employe Alice(Divyanshi);
    Employe Atri;
    Atri = Tilak;
    Atri.salary = 10000;
    Alice.salary = 20000;
    Divyanshi.display();
    Tilak.display();
    Alice.display();
    Atri.display();
    return 0;
}