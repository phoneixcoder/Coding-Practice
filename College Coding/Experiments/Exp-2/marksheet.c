#include<stdio.h>
int main(){
    char name[20];
    int rollNumber;
    int markMaths;
    int markPhysics;
    int markChemistry;

    printf("Enter your name: \n");
    scanf("%s" , &name);
    
    printf("Enter Your roll number: \n");
    scanf("%d" , &rollNumber);

    printf("Enter your marks in maths: \n");
    scanf("%d" , &markMaths);

    printf("Enter your marks in physics: \n");
    scanf("%d" , &markPhysics);

    printf("Enter your marks in chemistry: \n");
    scanf("%d" , &markChemistry);

    float percentage = (markPhysics + markMaths + markChemistry)/3;

    if (percentage < 50.0)
    {
        printf("Fail!");
    }
    else if(percentage < 70 && percentage > 50){
        printf("Need!");
    }
    else if(percentage > 70){
        printf("Well Done!");
    }
}