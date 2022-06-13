#include<iostream>
using namespace std;

class Distance{
    
    private:
    int feet;
    float inches;

    public:
    Distance(){
        this -> feet = 0;
        this -> inches = 0;
    }
    Distance(int feet , float inches){
        this -> feet = feet;
        this -> inches = inches;
    }

    void setData(){
        int feet;
        cout<<"Enter the value of Feet: "<<endl;
        cin>>feet;
        float inches;
        cout<<"Enter the value of Inches: "<<endl;
        cin>>inches;

        while (inches < 0 && inches >= 12)
        {
            cout<<"Enter the correct Value: "<<endl;
            cin>>inches;
        }
        

        this -> inches = inches;
        this -> feet = feet;
        
        return;
    }

    void getData(){
        cout<<this -> feet<<"'"<<this ->inches<<"''"<<endl;
    }

    void addDist(Distance d1 , Distance d2)
    {
        int feet;
        float inches;

        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        if (inches >= 12)
        {
            this -> inches = inches - 12;
            this -> feet = feet + 1;
        }
        else{
            this -> inches = inches;
            this -> feet = feet;
        }
        return;
    }
    Distance addDist(Distance);
};

Distance Distance :: addDist (Distance d2){
        Distance d3;
        int feet;
        float inches;

        d3.feet = d2.feet + this -> feet;
        d3.inches = this -> inches + d2.inches;
        if (d3.inches >= 12)
        {
            d3.inches -= 12;
            d3.feet += 1;
        }
        return d3;    
}

int main(){
    // Distance distance;
    // distance = Distance();
    // distance.getData();
    // distance = Distance(5 , 6);
    // distance.getData();
    // distance.setData();
    // distance.getData();

    Distance d1;
    d1.setData();
    d1.getData();
    Distance d2;
    d2.setData();
    d2.getData();

    Distance d3;
    d3.addDist(d1 , d2);
    d3.getData();
    
    Distance d4 = d1.addDist(d2);
    d4.getData();
    return 0;
}