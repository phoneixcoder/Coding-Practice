#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        int inches;
    public:
        Distance(){
            inches = 0;
            feet = 0;
        }
        Distance(int in, int ft){
            inches = in;
            feet = ft;
        }
        void setData(int in, int ft){
            this -> inches = in;
            this -> feet = ft;
        }
        void showData(){
            cout<<"Distance: "<<feet<<" "<<inches;
            cout<<endl;
        }
        void addDistance(Distance , Distance);
};

void Distance::addDistance(Distance distance1, Distance distance2){
    this -> inches = distance1.inches + distance2.inches;
    int carry = 0;
    if (this -> inches > 11)
    {
        carry = this -> inches - 12;
    }
    this -> feet = distance1.feet + distance2.feet + carry;
    return;
}
int main(){
    Distance d1 = Distance(10, 11);
    Distance d2, d3;
    d1.showData();
    d2.setData(1, 1);
    d2.showData();
    d3.addDistance(d1, d2);
    d3.showData();
    return 0;
}