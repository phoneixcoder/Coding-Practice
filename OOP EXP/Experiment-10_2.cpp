#include<iostream>

using namespace std;

class Counter{
    int cnt;
    public:
    Counter(){
        cnt = 0;
    }
    Counter(int a){
        cnt = a;
    }
    Counter operator ++(){
        cnt++;
        return Counter(cnt);
    }
};

int main(){

    Counter c1(5), c2(6);
    Counter c3;
    c3 = c2++;
    return 0;
}