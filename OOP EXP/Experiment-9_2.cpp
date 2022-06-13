#include<iostream>
using namespace std;
class StaticDemo{
    private:
    static int srNo;
    int count;
    public:
    StaticDemo(){
        srNo++;
        count = srNo;
    }
    int serialNumber(){
        return count;
    }
};

int StaticDemo :: srNo;

int main(){
    StaticDemo s1, s2, s3;
    cout<<" "<<s1.serialNumber()<<" "<<s2.serialNumber()<<" "<<s3.serialNumber()<<endl;
    return 0;
}