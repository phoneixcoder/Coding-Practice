#include<iostream>
#include <cstring>

using namespace std;

class Cars{
    char *name;
    char *color;
    static int count;
    public:
        Cars(){
            name = new char[15];
            color = new char[10];
            count++;
        }
        void setter(char *n1, char *c1){
            strcpy(name, n1);
            strcpy(color, c1);
        }
        void getter(){
            cout<<name<<" ";
            cout<<color<<" ";
            cout<<count<<endl;
        }
        ~Cars(){
            delete [] name;
            delete [] color;
        }
};

int Cars::count = 0;

int main(){
    Cars Swift;
    char *name = new char[15];
    name = "swift";
    Swift.setter("swift", "white");
    Swift.getter();
    Cars Santro;
    Santro.setter("santro", "golden");
    Santro.getter();
    Cars Wagnar;
    Wagnar.setter("wagnar", "black");
    Wagnar.getter();
    Cars Alto;
    Alto.setter("alto", "grey");
    Alto.getter();
    

    return 0;
}