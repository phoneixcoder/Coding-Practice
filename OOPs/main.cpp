#include <iostream>
using namespace std;
//Structure declaration and defination
struct Student
{
    int rollNo;
    char name[40];
    int m1, m2, m3;
    float percentage;
    char grade;
};

typedef struct Student Student;

//Prototype or declaration

void getData(Student[], int n);
void showData(Student[], int n);
void computeGrade(Student[], int n);

// Main

int main()
{
    int n;
    cout << "Enter number of studetns: " << endl;
    cin >> n;

    Student *st = new Student[n];
    getData(st, n);
}

void getData(Student *st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Name: " << endl;
        cin >> st[i].name;
        cout << "Enter Roll Number: " << endl;
        cin >> st[i].rollNo;
        cout << "Enter Marks in DSA: " << endl;
        cin >> st[i].m1;
        cout << "Enter Marks in DE: " << endl;
        cin >> st[i].m2;
        cout << "Enter Marks in OOPs: " << endl;
        cin >> st[i].m3;
    }
}

void computeGrade(Student *st, int n)
{
    float percentage = 0;

    for (int i = 0; i < n; i++)
    {
        percentage = (st[i].m1 + st[i].m2 + st[i].m3) / 3;
        st[i].percentage = percentage;
        if (percentage >= 60)
        {
            st[i].grade = 'A';
        }else{
            st[i].grade = 'P';
        }
    }
}

void showData(Student *st , int n){
    cout<<"************DATA OF STUDENTS************"<<endl;
    for(int i = 0; i < n; i++)
    {
        
    }
    
}