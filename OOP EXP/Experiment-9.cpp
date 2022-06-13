#include<iostream>

using namespace std;

class Distance{
    int feet;
    float inches;
    public:
    Distance(){
        feet = 0;
        inches = 0.0;
    }
    Distance(int ft, float in){
        feet = ft;
        inches = in;
    }
    void showDist() const{
        cout<<"Feet "<<feet;
        cout<<"Inches "<<inches;
    }

    Distance addDist(const Distance &d2)const{
        Distance temp;
        temp.feet = feet + d2.feet;
        temp.inches = inches + d2.inches;
        if (temp.inches >= 12)
        {
            temp.feet += 1;
            temp.inches -= 12;
        }
        return temp;
    }
};

int main(){
    Distance d1(9, 7.6), d2(7, 10), d3;
    d3 = d1.addDist(d2);
    d1.showDist();
    d2.showDist();
    d3.showDist();
    return 0;
}