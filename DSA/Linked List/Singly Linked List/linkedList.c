#include<stdio.h>

struct linkedList
{
    int value;
    struct linkedList * next;
}Node;

void insertEnd(struct linkedList *head){
    int n;
    scanf("%d" , n);

    if (head == NULL)
    {
        head -> value = n;
        head -> next = NULL;    
        return;
    }
    
    struct linkedList *nextNode = NULL;
    nextNode -> value = n;
    head -> next = nextNode;
    nextNode -> next = NULL;
    return;
}
void insertBeg(struct linkedList *head){
    int n;
    scanf("%d" , n);

    if (head == NULL)
    {
        head -> value = n;
        head -> next = NULL;    
        return;
    }
    
    struct linkedList *nextNode = NULL;
    nextNode -> value = n;
    nextNode -> next = head;
    head = nextNode;
    return;
}
void insertPos(struct linkedList *head){
    int n , pos;
    scanf("%d" , n);
    // printf("Enter position:")
    scanf("%d" , pos);

    if (head == NULL)
    {
        head -> value = n;
        head -> next = NULL;    
        return;
    }
    struct linkedList *nextNode = NULL;
    int i = 0;
    struct linkedList *temp = head;

    while (i < pos)
    {
        temp = temp -> next;
        i++;
    }
    int *tempt = temp -> next; //This step can directly be done but for clear understanding of others I'm doing this in way
    temp -> next = nextNode;
    nextNode -> value = n;
    nextNode -> next = tempt;
    return;
}
void delete(struct linkedList *head){
    int pos;
    // scanf("%d" , n);
    // printf("Enter position:")
    scanf("%d" , pos);

    if (head == NULL)
    {
        // head -> value = n;
        // head -> next = NULL;    
        return;
    }
    // struct linkedList *nextNode = NULL;
    int i = 0;
    struct linkedList *temp = head;

    while (i < pos)
    {
        temp = temp -> next;
        i++;
    }
    struct linkedList *curr = temp -> next;
    temp -> next = NULL;
    temp -> next = curr -> next;
    curr -> next = NULL;
    return;
}

void print(struct linkedList *head){
    struct linkedList *temp = head;

    while(temp->next != NULL){
        printf(temp -> value , " ");
        temp = temp -> next;
    }
    return;
}

int main(){
    struct linkedList *head = NULL;
   // head -> value = value;
 //   head -> next = NULL;
    int opt;
    do
    {
        printf("Press 1: Insert at the beginning.\n");
        printf("Press 2: Insert at the end.\n");
        printf("Press 3: Insert at the particular position.\n");
        printf("Press 4: Traverse through the list.\n");
        printf("Press 5: Delete particular Node.\n");
        printf("Press -1: To Exit.\n");

        scanf("%d" , opt);
        switch (opt)
        {
        case 1:
            insertBeg(head);
            print(head);
            printf("\n");
            break;
        case 2:
            insertEnd(head);
            print(head);
            printf("\n");
            break;
        case 3:
            insertPos(head);
            print(head);
            printf("\n");
            break;
        case 4:
            print(head);
            print(head);
            printf("\n");
            break;
        case 5:
            delete(head);
            print(head);
            printf("\n");
            break;
        case -1:
            break;
        default:
            break;
        }

    } while (opt != -1);
    
}
