#include<iostream>
using namespace std;

struct Student
{
    int rollNo;
    char studentName[30];
    int marks1 , marks2 , marks3;
    int percentage;
    int grade;
};

void updateValue(Student *array , int &i , char studentName[30] , int rollNo , int marks1 , int marks2 , int marks3)
{
    char grade;
    int total = marks1 + marks2 + marks3;
    int percentage = total/3;
    if (percentage >= 60)
    {
        grade = 'A';
    }else if (percentage >= 50 && 60< percentage)
    {
        grade ='B';
    }else{
        grade = 'C';
    }
    
    array[i].grade = grade;
    array[i].percentage = percentage;
}

void showData(Student student){
    cout<<student.studentName<<"\t"<<student.rollNo<<"\t"<<student.marks1<<"\t"<<student.marks2<<"\t"<<student.marks3<<"\t"<<student.percentage<<"\t"<<student.grade<<endl;
    return;
}

void correctMarks(int &marks1){
    while (marks1 > 100)
    {
        cout<<"Enter correct marks: ";
        cin>>marks1;
    }
    
}

int main(){
    int n;
    Student *array = new Student[n];
    cout<<"Enter number of students: "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter details of student "<<i+1<<endl;
        int rollNo ,  marks1 , marks2 , marks3;
        char studentName[30];

        cout<<"Enter Name: ";
        cin>>studentName;
        
        cout<<"\nEnter roll number: ";
        cin>>rollNo;
        
        cout<<"\nEnter marks in subject 1: ";
        cin>>marks1;
        if (marks1 > 100)
        {
            correctMarks(marks1);
        }
        
        cout<<"\nEnter marks in subject 2: ";
        cin>>marks2;
        if (marks2 > 100)
        {
            correctMarks(marks2);
        }
        
        cout<<"\nEnter marks in subject 3: ";
        cin>>marks3;
        if (marks3 > 100)
        {
            correctMarks(marks1);
        }
        updateValue(array,i,studentName , rollNo , marks1 , marks2 , marks3);
    }
    
    cout<<"\nHere is the data of all the student.\n";
    cout<<"\nStudent Name\tRoll Number\tMarks-1\tMarks-2\tMarks-3\tPercentage\tGrade"<<endl;
    for (int i = 0; i < n; i++)
    {
        showData(array[i]);
    }
    

}