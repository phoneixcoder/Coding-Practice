#include<iostream>
using namespace std;

class Vecotr{
    private:
        int n;
        int *arr;

    public:
        Vecotr(int S){
            this -> n = S;
            arr = new int [n];
        }
        void getData(){
            cout<<"Enter elements of the vector: ";
            for (int i = 0; i < this -> n; i++)
            {
                cin>>this -> arr[i];
            }
            cout<<endl;
        }
        int sumElements(){
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            return sum;
        }
};

int main(){
    Vecotr v (5);
    v.getData();
    int sum = v.sumElements();
    cout<<"Sum 0f the elements: "<<sum<<endl;
    return 0;
}