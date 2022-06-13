#include<iostream>
#include <cstring>
using namespace std;

class String{
    private:
        char* str;
    public:
        String(const char *s){
            int len = strlen(s);
            str = new char[len];
            strcpy(str, s);
        }
        void showData(){
            cout<<str<<endl;
        }
        void setData(){
            char ch[100];
            cin.getline(ch, 100);
            strcpy(str, ch);
        }
        ~String(){
            delete [] str;
        }
};


int main(){
    String str1 ("C++ Programming");
    String str2 ("Dynamic Programming");
    str2.showData();
    str1.showData();
    str2.setData();
    str2.showData();
    return 0;
}