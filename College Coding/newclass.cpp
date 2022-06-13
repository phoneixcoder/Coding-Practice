#include<iostream>
using namespace std;

class Books{
    public:
    int bookPrice;
    int bookNumber;
    char bookName[100];

    // Books(int number){
    //     this -> bookNumber = number;
    //     setPrice();
    //     setName();
    // }

    void setBookName(){
        cin>>bookName;
    }
    void setBookPrice(){
        cin>>bookPrice;
    }
    void setBookNumber(){
        cin>>bookNumber;
    }

};
int main(){
    Books *booksData = takeInput();    

}

Books * takeInput(){
    Books *newItem = new Books [20];
    for (int i = 0; i < 10; i++)
    {
        newItem[i].setBookNumber();
        newItem[i].setBookName();
        newItem[i].setBookPrice();
    }
    return newItem;
}

void printSpecific(Books *newItem){
    for (int i = 0; i < 10; i++)
    {
        
        if (newItem[i].bookPrice >= 500 && newItem[i].bookPrice <= 1000)
        {
            cout<<newItem[i].bookNumber<<endl;
            cout<<newItem[i].bookName<<endl;
            cout<<newItem[i].bookPrice<<endl;
        }
        
    }
    
}

void onlySpecific(Books *newItem){
    for (int i = 10; i < 20; i++)
    {
        newItem[i].setBookNumber();
        newItem[i].setBookName();
        newItem[i].setBookPrice();
    }
    
}