#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string str = "File handing in c++";
    ofstream out ("Text.txt");
    for (int i = 0; str[i] != NULL; i++)
    {
        out.put(str[i]);
        cout<<"File written"<<endl;
        out.close;
    }
    
}