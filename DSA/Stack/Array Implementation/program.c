#include<stdio.h>

struct Stack
{
    int stack[100];
    int top;
};


typedef struct Stack Stack;

int isFull(Stack *st){
    if (st -> top >=99)
    {
        return 1;
    }else{
        return 0;
    }
    
}

int isEmpty(Stack *st){
    if (st -> top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

void push(Stack *st){
    int num;
    scanf("%d" , &num);

    if (isFull(st) == 1)
    {
        printf("Stack Overflow\n");
    }
    else{
        // st -> size += 1;
        int p = st -> top;
        st -> stack[p] = num;
        st -> top++; 
    }
}

int pop(Stack *st){
    if (isEmpty(st) == 1)
    {
        printf("Stack Underflow\n");
    }
    else{
        int p = st -> top;
        int top = st -> stack[p];
        st -> stack[p] = NULL;
        return top;
    }
}

void traverse(Stack *st){
    for (int i = st -> top; i >= 0; i--)
    {
        printf(st -> stack[i],"\n");
    }
    return;   
}

int main(){
    int number = 0;
    Stack st;
    st.top = -1;
    while (number != 7)
    {
        int choice;
        printf("**************ENTER YOUR CHOICE****************\n1. Push\n2. Pop\n3. isFull\n4. isEmpty\n5. Top\n6. Traverse\n7. Exit");
        scanf("%d" , &choice);
        switch (choice)
        {
        case 1:
            push(&st);
            break;
        case 2:
            int temp = pop(&st);
            printf(temp, "Poped\n");
        case 3:
            
            if (isFull(&st) == 1)
            {
                printf("Stack is full.\n");
            }else{
                printf("Stack is not full.\n");
            }
        case 4:
            
            if (isEmpty(&st) == 1)
            {
                printf("Stack is empty.\n");
            }else{
                printf("Stack is not empty\n");
            }
        case 5:
            int p = st.top;
            printf(st.stack[p],"\n");
        case 6:
            
        default:
            break;
        }
    }
    
}