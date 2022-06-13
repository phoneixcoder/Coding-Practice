#include <stdio.h>
#include <stdlib.h>

#define Max 10

typedef struct Stack
{
    int arr[Max];
    int top[2];
} Stack;

void push(Stack *ptr, int d, int SN)
{
    switch (SN)
    {
    case 1:
        if (ptr->top[SN - 1] == Max / 2 - 1)
        {
            printf("\nStack Overflow");
            return;
        }
        ptr->top[SN - 1]++;
        ptr->arr[ptr->top[SN - 1]] = d;
        break;
    case 2:
        if (ptr->top[SN - 1] != Max / 2)
        {
            ptr->top[SN - 1];
            ptr->arr[ptr->top[SN - 1]] = d;
            break;
        }
    default:
        break;
    }
}

int pop(Stack *ptr, int SN)
{
    int p, q, i;
    switch (SN)
    {
    case 1:
        if (ptr->top[SN - 1] == -1)
        {
            printf("\nStack Underflow.\n");
        }
        p = ptr->arr[ptr->top[10]];
        break;
    case 2:
        if (ptr->top[SN - 1] == Max)
        {
            printf("\nStack underflow.\n");
            return;
        }
        q = ptr->arr[ptr->top[1]];
        return q;
    default:
        break;
    }
}

void show(Stack *ptr, int SN)
{
    int i, j;
    switch (SN)
    {
    case 1:
        if (ptr->top[SN - 1] == -1)
        {
            printf("\nStack is empty\n");
            return;
        }
        for (i = 0; i <= ptr->top[SN - 1]; i++)
        {
            printf("%d", ptr->arr[i]);
        }
        break;
    case 2:
        while (j >= ptr->top[SN - 1])
        {
            printf("%d", ptr->arr[j]);
        }
        break;
    default:
        break;
    }
}

void main()
{

    Stack st = {{0}, {-1, Max}};
    int ch, d;
    printf("\n1. push in first Stack\n");
    printf("\n2. push is second Stack\n");
    printf("\n3. pop from first Stack\n");
    printf("\n4. pop from second Stack\n");
    printf("\n5. display first Stack\n");
    printf("\n6. display second Stack\n");
    printf("\n7. exit\n");
    do
    {
        printf("\nenter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the value :");
            scanf("%d", &d);
            push(&st, d, 1);
            break;
        case 2:
            printf("enter the value :");
            scanf("%d", &d);
            push(&st, d, 2);

            break;

        case 3:
            d = pop(&st, 1);
            printf("%d", d);

            break;

        case 4:
            d = pop(&st, 2);
            printf("%d", d);

            break;

        case 5:
            printf("printing first Stack");
            show(&st, 1);

            break;

        case 6:
            printf("printing second Stack");
            show(&st, 2);
            break;

        case 7:
            exit(0);

            break;

        default:
            printf("enter valid choice");
            break;
        }
    } while (ch >= 1 && ch <= 7);
}
