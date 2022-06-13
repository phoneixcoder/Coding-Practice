#include<stdio.h>
#include<stdlib.h

typedef struct Node Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(){
    Node* root = (Node*) malloc(sizeof(Node));
    root -> left = NULL;
    root -> right = NULL;
    return root;
}

void insertNode(Node* root, int data){
    if(root == NULL){
        root -> data = data;
        root -> left = NULL;
        root -> right = NULL;
        return;
    }
    if(data <= root -> data){
        insertNode(root -> left);
    }
    else if(data > root -> data){
        insertNode(root -> right);
    }
    return;
}

void printInOrder(Node* root){
    if(root == NULL){
        printf("Empty");
        return;
    }
    printInOrder(root -> left);
    printf(root -> data);
    printInOrder(root -> right);
    return;
}

int main(){
    Node* root = createNode();
    int ch = 1, x;
    printf("******** Menu *********\n");
    printf("1. Insert Node.\n");
    printf("2. Print Inorder Traversal.\n");
    printf("3. Exit\n");
    while (ch){
        printf("\nEnter your choice: ");
        scanf(ch);
        printf("\n");

        switch (ch) {
            case 1:
                printf("Enter data: ");
                scanf(x);
                insertNode(root, x);
                printf("\nNode Inserted.\n");
                break;
            case 2:
                printInOrder(root);
                break;
            case 3:
                exit(0);
                break;
        }
    }
    return 0;
}