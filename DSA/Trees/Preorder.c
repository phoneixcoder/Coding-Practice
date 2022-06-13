#include <stdio.h>
#include <stdlib.h>

struct Tree
{
    int data;    
    struct Tree* left;
    struct Tree* right;
};
typedef struct Tree Tree;

Tree *buildTree(){
    int d;
    printf("\nEnter Data: ");
    scanf("%d" , &d);
    if (d == -1)
    {
        return NULL;
    }
    Tree *n = (Tree*) malloc(sizeof(Tree));
    n -> data = d;
    n -> left = buildTree();
    n -> right = buildTree();
    return n;
}

void printInOrder(Tree *root){
    if (root == NULL)
    {
        return;
    }
    
    printInOrder(root -> left);
    printf("%d" , root -> data, "\n");
    printInOrder(root -> right);
    return;
}

void printPreOrder(Tree *root){
    if (root == NULL)
    {
        return;
    }

    printf("%d" , root -> data, "\n");
    printPreOrder(root -> left);
    printPreOrder(root -> right);
    return;
}
void printPostOrder(Tree *root){
    if (root == NULL)
    {
        return;
    }
    printPreOrder(root -> left);
    printPreOrder(root -> right);    
    printf("%d" , root -> data, "\n");
    return;
}

int heightBT(Tree* root){
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = heightBT(root -> left);
    int rightHeight = heightBT(root -> right);

    return 1 + max(leftHeight , rightHeight);
}

int daimeterBT(Tree *root){
    if (root == NULL)
    {
        return 0;
    }
    
    int D1 = heightBT(root -> left) + heightBT(root -> right);
    int D2 = daimeterBT(root -> left);
    int D3 = daimeterBT(root -> right);

    return max(D1 , max(D2 , D3));
}

int main(){
    Tree *root = buildTree();
    printPreOrder(root);
    printInOrder(root);
    printPostOrder(root);
}