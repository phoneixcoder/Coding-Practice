#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};

struct stack *push(struct stack *top, int data);
struct stack *pop(struct stack *top, int *value);
struct stack *travarsal(struct stack *top);
int top_value(struct stack *top, int *value);
int is_empty(struct stack *top);

int main()
{
    struct stack *top = NULL;
    int ch, value, print;
    printf("\n\n------------------------------------*----\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.top\n");
    printf("4.Travarsal\n");
    printf("5.Exit\n");
    printf("\n------------------------------------*----\n");

    do
    {

        printf("\n\nEnter the choise :\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n\nEnter the value :");
            scanf("%d", &value);
            top = push(top, value);
            break;
        case 2:

            top = pop(top, &value);
            printf("Popped value is : %d ", value);
            break;
        case 3:

            top_value(top, &value);
            printf("%d", value);

            break;

        case 4:
            travarsal(top);
            break;

        case 5:
            exit(0);
            break;
        }

    } while (ch != 5);

    return 0;
}

struct stack *push(struct stack *top, int data)
{
    struct stack *ptr;
    ptr = (struct stack *)malloc(sizeof(struct stack *));
    if (top == NULL)
    {
        ptr->data = data;
        ptr->next = NULL;
        return ptr;
    }

    ptr->data = data;
    ptr->next = top;
    return ptr;
}
struct stack *pop(struct stack *top, int *value)
{
    if (is_empty(top))
    {

        struct stack *ptr, *p;
        ptr = top;
        p = top;
        *value = p->data;
        ptr = ptr->next;
        free(p);
        return ptr;
    }
    else
    {
        printf("stack is empty");
    }
}
struct stack *travarsal(struct stack *top)

{
    if (is_empty(top))
    {
        printf("The stack is : \n");
        while (top != NULL)
        {

            printf("%d\n", top->data);
            top = top->next;
        }
    }
    else
    {
        printf("Stack is empty");
    }
}

int top_value(struct stack *top, int *value)
{
    return top->data;
}
int is_empty(struct stack *top)
{
    if (top == NULL)
        return 0;
    return 1;
}