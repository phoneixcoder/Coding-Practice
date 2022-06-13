#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
typedef struct Node Node;

Node *head = NULL;

void insertBeg()
{
    Node *ptr;
    int item;
    ptr = (Node *)malloc(sizeof(Node *));
    scanf("%d", &item);
    if (head == NULL)
    {
        ptr->data = item;
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
        return;
    }

    ptr->data = item;
    head->prev = ptr;
    ptr->next = head;
    head = ptr;
    printf("\nNode inserted!\n");
    return;
}

void insertEnd()
{
    Node *ptr;
    int item;
    ptr = (Node *)malloc(sizeof(Node *));
    scanf("%d", &item);
    if (head == NULL)
    {
        ptr->data = item;
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    ptr->data = item;
    ptr->next = NULL;
    ptr->prev = temp;
    temp->next = ptr;
    printf("\nNode inserted!\n");
    return;
}

void insertPos()
{
    Node *ptr;
    int item, pos;
    scanf("%d", &pos);
    ptr = (Node *)malloc(sizeof(Node *));
    scanf("%d", &item);
    if (head == NULL)
    {
        ptr->data = item;
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
        return;
    }
    int counter = 0;
    Node *temp = head;

    while (counter < pos && temp != NULL)
    {
        temp = temp->next;
    }

    ptr->data = item;
    ptr->next = temp->next;
    ptr->prev = temp;
    temp->next->prev = ptr;
    temp->next = ptr;
    printf("\nNode inserted!\n");
    return;
}

void deleteBeg()
{
    Node *newNode;
    newNode = (Node *)malloc(sizeof(Node *));
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        newNode = head;
        head = newNode->next;
        free(newNode);
        head->prev = NULL;
        printf("\nNode Deleted!\n");
    }
    return;
}
void deleteEnd()
{
    Node *newNode;
    newNode = (Node *)malloc(sizeof(Node *));
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        while (newNode->next != NULL)
        {
            newNode = newNode->next;
        }
        Node *temp;
        temp = (Node *)malloc(sizeof(Node *));
        temp = newNode->prev;
        temp->next = NULL;
        free(newNode);
        printf("\nNode Deleted!\n");
    }
    return;
}

void deletePos()
{
    Node *newNode;
    int pos, item;
    scanf("%d", &pos);
    newNode = (Node *)malloc(sizeof(Node *));
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        int counter = 0;
        while (newNode != NULL && counter < pos)
        {
            newNode = newNode->next;
            counter++;
        }
        Node *temp1;
        temp1 = (Node *)malloc(sizeof(Node *));
        Node *temp2;
        temp2 = (Node *)malloc(sizeof(Node *));

        temp1 = newNode->next;
        temp2 = temp1->next;
        temp1->prev = NULL;
        temp1->next = NULL;
        free(temp1);
        newNode->next = temp2;
        temp2->prev = newNode;
        printf("\nNode Deleted!\n");
    }
    return;
}

void search()
{
    Node *ptr;
    ptr = (Node *)malloc(sizeof(Node *));
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("Element found at location %d ", i + 1);
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Element not found\n");
        }
    }
}

void print()
{
    Node *ptr;
    ptr = (Node *)malloc(sizeof(Node *));
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\n[");
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            ptr = ptr->next;
        }
        printf("]\n");
    }
}

int main()
{
    printf("\n\n*********WELCOME*********\n");
    printf("\n===============================================\n");
    printf("\n1.Insert at begining\n2.Insert at last\n3.Insert at any location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Print\n9.Exit\n");
    printf("\n===============================================\n");
    int choice = 0;
    while (choice != 9)
    {
        
            printf("\nEnter your choice?: ");
            scanf("\n%d", &choice);
            printf("\n");

            switch (choice)
            {
            case 1:
                insertBeg();
                print();
                break;
            case 2:
                insertEnd();
                print();
                break;
            case 3:
                insertPos();
                print();
                break;
            case 4:
                deleteBeg();
                print();
                break;
            case 5:
                deleteEnd();
                print();
                break;
            case 6:
                deletePos();
                print();
                break;
            case 7:
                search();
                break;
            case 8:
                print();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("Please enter valid choice..");
                break;
            }
        
    }
    printf("Exited!");
    return 0;
}
