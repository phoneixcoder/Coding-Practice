#include<stdio.h>
#include<stdlib.h>

struct tree{
    int data;
    struct tree * right;
    struct tree * left;
};
typedef struct tree Tree;
Tree* createNode(int x){
    Tree *newNode;
    newNode -> data = x;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

void setLeft(Tree* p , int data){
    if (p == NULL)
    {
        printf("Void insertion");
    }
    else if (p -> left != NULL)
    {
        printf("Invalid insertion");
    }
    else{
        p -> left = createNode(data);
    }
    return ;
}
void setRight(Tree* p , int data){
    if (p == NULL)
    {
        printf("Void insertion");
    }
    else if (p -> right != NULL)
    {
        printf("Invalid insertion");
    }
    else{
        p -> right = createNode(data);
    }
    return;
}

void createBts(Tree *tree){
    int num;
    printf("Enter number of elem: ");
    scanf("%d", &num);
    int *arr = (int*) malloc (num *sizeof(int));
    printf("Enter elem: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    tree = createNode(arr[0]);

    for (int i = 1; i < num; i++)
    {
        Tree *p , *q;
        p = tree;
        q = tree;

        while (arr[i] != p -> data && q != NULL)
        {
            p = q;
            if (arr[i] < p -> data)
            {
                q = p -> left;
            }else{
                q = p -> right;
            }
            
        }

        if (num == p -> data)
        {
            printf("Duplicate Number.");
        }
        else if(arr[i] < p -> data){
            setLeft(p , arr[i]);
        }
        else{
            setRight(p , arr[i]);
        }
        
    }
    
}





int main(){
    Tree* tree;
    createBts(tree);
    return;
}