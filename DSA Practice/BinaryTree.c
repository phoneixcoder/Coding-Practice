#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
typedef struct Node Node;

Node* CreateNode(){
    Node* node = (Node*) malloc (sizeof(Node*)); 
    node -> left = NULL;
    node -> right = NULL;
    return node;
}

Node* insert(){
    int data;
    Node* node = CreateNode();
    scanf("%d",&data);
    if (data == -1)
    {
        node -> data = -1;
        return node;
    }
    node -> data = data;
    node -> left = insert();
    node -> right = insert();
    return node;    
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    scanf("%d",&root -> data);
    preOrder(root -> left);
    preOrder(root -> right);
    return;
}

int main(){
    Node* root = CreateNode();   
    root = insert();
    preOrder(root);
    return 0;
}