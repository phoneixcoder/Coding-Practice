#include<iostream>
using namespace std;

bool checkEO(int x){
    if (1 & x)
    {
        return false;
    }
    return true;
}

int main(){
    int x;
    cin>>x;
    if (checkEO(x))
    {
        cout<<"Even"<<endl;        
    }else{
        cout<<"Odd"<<endl;        
    }
    
}