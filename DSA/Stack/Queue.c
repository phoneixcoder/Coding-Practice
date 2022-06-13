#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct queue
{
    int front, rear;
    int arr[MAX];
} queue;

void create_queue(queue *);
int is_empty(queue *);
int is_full(queue *);
void enqueue(queue *, int);
int dequeue(queue *);
void traversal(queue *);

int main()
{
    queue *q;
    int value, ch;
    create_queue(q);
    // printf("%d %d",q->front,q->rear);

    do
    {
        printf("\n------------------------------------*----\n");
        printf("\n\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. traversal \n");
        printf("4. Exit\n");
        printf("\n------------------------------------*----\n\n\n");

        printf("\nEnter the choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case (1):
            if (is_full(q))
            {
                printf("Queue is full");
            }
            else
            {
                printf("\nEnter the value : ");
                scanf("%d", &value);
                enqueue(q, value);
            }
            break;

        case (2):

            if (is_empty(q))
            {
                printf("Queue is Empty!!..");
            }
            else
            {
                value = dequeue(q);
                printf("The Dequeued value is : %d", value);
            }
            break;

        case (3):
            printf("\n\nThe Updated Queue is :\n");
            traversal(q);
            printf("\n\n");
            break;

        case (4):
            exit(0);
        }

    } while (ch >= 1 && ch <= 4);

    return 0;
}

void create_queue(queue *q)
{
    q->front = q->rear = -1;
}
int is_empty(queue *q)
{
    if (q->front == -1)
        return 1;
    return 0;
}
int is_full(queue *q)
{
    if (q->front == 0 && q->rear == MAX - 1)
        return 1;
    return 0;
}
void enqueue(queue *q, int value)
{
    int i;
    if (is_empty(q))
    {
        q->front = q->rear = 0;
    }
    else if (q->rear == MAX-1 )
    {
        i = q->front;
        while (i <= q->rear)
        {
            q->arr[i - q->front] = q->arr[i];
            i++;
        }
        q->rear = q->rear - q->front + 1;
        q->front = 0;
    }
    else
    {

        q->rear += 1;
    }

    q->arr[q->rear] = value;
}

int dequeue(queue *q)
{
    int i;
    i = q->arr[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    q->front += 1;
    return i;
}

void traversal(queue *q)
{
    if (is_empty(q))
    {
        printf("Queue is Empty !.. ");
    }
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d--", q->arr[i]);
    }
}