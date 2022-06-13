#include<iostream>

using namespace std;

double power(double n , int p = 2){ //passing default arguments in power function
    double ans = 1;

    for (int i = 1; i <= p; i++)
    {
        ans = ans * n;
    }
    return ans;
}

double power(double n){
    double ans = 1;

    for (int i = 1; i <= 2; i++)
    {
        ans = ans * n;
    }
    
    return ans;
}

void repchar(char c = '+' , int n = 10){
    for (int i = 1; i < n; i++)
    {
        cout<<c<<" ";
    }
    cout<<endl;
}

int main(){
    double n; //defining the number variable
    cin>>n;   //taking input of that number
    int p;    //defining the power variable 
    cin>>p;   //taking input of that power 

    cout<<power(n , p)<<endl; // calling the function and printing the value.
 
    repchar();
    repchar('*' , 20);
    repchar('*');
    
    return 0;
}