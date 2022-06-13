#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack{
    int *array;
    int size;
    int top;
};
typedef struct Stack Stack;

Stack* createStack(int size){
    Stack *stack;
    
    stack = (Stack*)malloc(sizeof(Stack));
    stack -> array = (int)malloc(sizeof(size));
    stack -> size = size;
    stack -> top = -1;

    return stack;
}

int isFull(Stack* stack){
    return stack -> top == stack -> size - 1;
}

int isEmpty(Stack* stack){
    return stack -> top == -1;
}

void push(Stack* stack, int data){
    if (isFull(stack))
    {
        printf("\nStack Overflow.\n");
        return;
    }
    stack -> array[stack -> top] = data;
    stack -> top += 1;
    printf("\nItem pushed into the stack.\n");
    return;
}

int pop(Stack *stack){
    if (isEmpty(stack))
    {
        printf("\nStack Underflow.\n");
        return -1;
    }
    int data = stack -> array[stack -> top ];
    stack -> top --;
    return(data);
}

int top(Stack *stack){
    if (isEmpty(stack))
    {
        return -1;
    }
    return (stack -> array[stack -> top]);    
}

void traverse(Stack *stack){
    if (isEmpty(stack))
    {
        return;
    }

    printf("[ ");
    for (int i = stack -> top; i <= 0; i--)
    {
        printf("%d",stack -> array[i]," ");
    }
    printf(" ]");
    return;
}

int main(){
    printf("\n**************ENTER YOUR CHOICE****************\n1. Push\n2. Pop\n3. isFull\n4. isEmpty\n5. Top\n6. Traverse\n7. Exit\n");
    Stack *stack = createStack(100);
    int choice = 0 , data , temp , peek;
    while (choice != 7)
    {
        printf("\nEnter your choice: ");
        scanf("%d" , &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter Data: \n");
            scanf("%d" , &data); 
            push(stack , data);
            break;
        case 2:
            temp = pop(stack);
            printf("\n%d",temp," Poped!\n");
            break;
            
        case 3:
            if (isFull(stack))
            {
                printf("\nStack is full.\n");
            }
            else{
                printf("\nStack is not full yet.\n");
            }
            break;
        case 4:
            if (isEmpty(stack))
            {
                printf("\nStack is empty.\n");
            }
            else{
                printf("\nStack is not empty.\n");
            }
            break;
        case 5:
            peek = top(stack);
            printf("\n%d",peek," is at top.\n");
            break;
        case 6:
            traverse(stack);
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nPlease enter the valid choice!\n");
            break;
        }
    }
}