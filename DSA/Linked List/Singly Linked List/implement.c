#include<stdio.h> //header file 

struct Node //strcuture create karliya .... khudka data type
{
    int data; // ek brick ka data member jismein user value daalega
    struct Node * next; // iske ander hun next node ka address dalenge
};

typedef struct Node Node; // 

Node*head = NULL;

void insertAtEnd(int pos){
    if (head == NULL)
    {
        int value;
        scanf('%d' , value);
        head -> data = value;
        head -> next = NULL;
    }
    
    //traverse thru list

    Node *temp = head;

    while (temp -> next != NULL)
    {
       temp = temp -> next;
    }
    
    Node * newNode;
    
    int value;
    scanf('%d' , value);

    // newNode -> data = value;
    // newNode -> next = NULL;
    // temp -> next = newNode;
    // newNode -> data = value;
    // newNode -> next = head;
    // head = newNode;



    int count = 0;
    while (count < pos -1)
    {
        temp = temp -> next;
    }

    Node *agla = temp -> next;
    temp -> next = NULL;
    temp -> next = newNode;
    newNode -> next = agla;
    

}

void deletion(int pos){
    if (head == NULL){
        return ;
    }

    //beg:
    
    head = head -> next;

    //end

    Node *temp = head;

    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = NULL;

}

void main(){
    Node * linkedList;

}