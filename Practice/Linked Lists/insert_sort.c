#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;

    struct Node* next;
};

struct Node* Head;

struct Node* createNode(struct Node* Head,int x){

struct Node* node = (struct Node*)malloc(sizeof(struct Node));
node ->data = x;
node ->next = NULL;

    return node;
}

void insertSort(struct Node **Head,struct Node* newNode){

struct Node* curr = *Head;
    
    if (*Head == NULL || (*Head)->data > newNode ->data)
    {
        newNode->next = *Head;
        *Head = newNode;
    }
    
    else{

        while (curr ->next != NULL && curr->next->data < newNode ->data)
        {
            curr = curr ->next;
        }
        
        newNode ->next = curr ->next;
        curr ->next = newNode;
    }
}

void printList(struct Node* Head){

    while (Head != NULL)
    {
        printf("%d\n",Head ->data);
        Head = Head ->next;
    }
    
}

int main(){

Head = NULL;
struct Node* newNode;

int n;

printf("Enter value for n:\n");
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    int x;
    printf("Enter value for data:\n");
    scanf("%d",&x);
    newNode = createNode(Head,x);
    insertSort(&Head,newNode);
}

printList(Head);

    return 0;
}