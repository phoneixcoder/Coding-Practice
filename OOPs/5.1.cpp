#include<iostream>
using namespace std;

class Vector{
    private:
    int size;
    int *arr;

    public:
    Vector(){
        arr = NULL;
        size = 0;
    }

    Vector(int size){
        this -> size = size;
        arr = new int[size];
    }

    void inputValues(){
        cout<<"Enter values: "<<endl;
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        return;
    }

    void showData(){
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }

    void setData(int size){
        this -> size = size;
        arr = new int[size];
        return;
    }

    void sum(){
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        cout<<"Sum: "<<sum<<endl;
        return;
    }
};

int main(){
    Vector v1;
    int size;
    cout<<"Enter size of the vector: "<<endl;
    cin>>size;
    v1.setData(size);
    v1.inputValues();
    v1.showData();
    v1.sum();

    int size2;
    cout<<"Enter size of second vector: "<<endl;
    cin>>size2;

    Vector v2(size2);
    v2.inputValues();
    v2.showData();
    v2.sum();

    return 0;
}