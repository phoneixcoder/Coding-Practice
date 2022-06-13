#include<iostream>

using namespace std;

int sum(int num){
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
        //sum = sum + num;
    }
    return sum;
}

int sum2(int num){
    if (num == 1)
    {
        return 1;
    }

    int sum = sum2(num - 1);
    return sum + num;
}

int main(){
    int num;
    cin>>num;
    cout<<sum(num)<<endl;
    cout<<sum2(num);
    return 0;
}