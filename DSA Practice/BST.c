#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
typedef struct Node Node;

Node* createNode(){
    Node* root = (Node*) malloc(sizeof(Node));
    root -> left = NULL;
    root -> right = NULL;
    return root;
}

Node* insertNode(Node* root, int data){
    if(root == NULL){
        root = createNode();
        root -> data = data;
        return root;
    }
    if(data <= root -> data){
        root -> left = insertNode(root -> left, data);
    }
    else if(data > root -> data){
        root -> right = insertNode(root -> right, data);
    }
    return root;
}

void printInOrder(Node* root){
    if(root == NULL){
        return;
    }
    printInOrder(root -> left);
    printf("%d",root -> data);
    printInOrder(root -> right);
    return;
}

void searchInBst(Node* root, int data){
    if(root == NULL){
        printf("\nNot Found\n");
        return;
    }
    if(root -> data == data){
        printf("\nFound it.\n");
        return 1;
    }
    if(root -> data > data){
        searchInBst(root -> left, data);
    }else if (root -> data < data)
    {
        searchInBst(root -> right, data);
    }
    return;
}

int main(){
    Node* root = createNode();
    int ch = 1, x = 0;
    printf("******** Menu *********\n");
    printf("1. Insert Node.\n");
    printf("2. Print Inorder Traversal.\n");
    printf("3. Exit\n");
    while (ch != 3){
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        printf("\n");

        switch (ch) {
            case 1:
                printf("Enter data: ");
                scanf("%d",&x);
                root = insertNode(root, x);
                printf("\nNode Inserted.\n");
                break;
            case 2:
                printInOrder(root);
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Enter correct choice.");
                break;
        }
    }
    return 0;
}