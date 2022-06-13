#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
typedef struct Node Node;

Node* head = NULL;

void insertBeg(){
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    int value;
    printf("\nEnter value: ");
    scanf("%d" , &value);
    newNode -> data = value;
    if (head == NULL)
    {
        head = newNode;
        newNode -> next = NULL;
        return;
    }
    newNode -> next = head;
    head = newNode;
    return;
}

void insertEnd(){
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    int value;
    printf("\nEnter value: ");
    scanf("%d" , &value);
    newNode -> data = value;

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = newNode;
    newNode -> next = NULL;

    return;
}

void insertPos(){
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    int value;    
    printf("\nEnter value: ");
    scanf("%d" , &value);
    newNode -> data = value;
    newNode -> next = NULL;

    int pos;
    printf("\nEnter Position: ");
    scanf("%d" , &pos);
    
    Node* temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp -> next;
        if (temp == NULL)
        {
            printf("\nCan't insert at this location\n");
            return;
        }
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;
    return;
}

void deleteBeg(){
    if (head == NULL)
    {
        printf("\nLinked List is empty\n");
        return;
    }
    
    Node* temp = head;
    head = head -> next;
    free(temp);
    return;
}

void deleteEnd(){
    if (head == NULL)
    {
        printf("\nLinked List is empty\n");
        return;
    }

    Node* temp = head;
    while (temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    Node* temp2 = temp;
    temp = temp -> next;
    temp2 -> next = NULL;
    free(temp);
    return;
}

void deletePos(){
    int pos;
    printf("\nEnter position: ");
    scanf("%d",&pos);

    if (head == NULL)
    {
        printf("\nLinked List is empty\n");
        return; 
    }
    
    Node* temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp -> next;
        if (temp == NULL)
        {
            printf("\nCan't Delete.\n");
            return;
        }
    }

    Node* temp2 = temp;
    temp = temp -> next;
    temp2 -> next = temp -> next;
    temp = temp -> next;
    free(temp);
    return;
}

void print(){
    if (head == NULL)
    {
        printf("[ ]");
        return;
    }
    
    Node* temp = head;    
    printf("[ ");
    while (temp -> next != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("]");
    return;
}

int main(){
    int x = 0;
    printf("******************MENU******************");
    printf("\n1. Insert Beg\n");
    printf("\n2. Insert End\n");
    printf("\n3. Insert At Pos\n");
    printf("\n4. Delete Beg\n");
    printf("\n5. Delete End\n");
    printf("\n6. Delete Pos\n");
    printf("\n7. Print\n");
    printf("\n8. Exit\n");
    while (x != 8)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            insertBeg();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            insertPos();
            break;
        case 4:
            deleteBeg();
            break;
        case 5:
            deleteEnd();
            break;
        case 6:
            deletePos();
            break;
        case 7:
            print();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Enter correct choice!");
            break;
        }
    }
    return 0;
}