#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;

    struct Node* next;
};

struct Node* Head;

void createNode(int x,int i){
//creating nodes and linking them
struct Node* node = (struct Node*)malloc(sizeof(struct Node));
node -> data = x;
node -> next = NULL;

    if (Head == NULL)
    {
        Head = node;
    }

    else{
        struct Node* temp = Head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
}

void printList(struct Node *Head){

    while (Head != NULL)
    {
        printf("%d \n",Head ->data);
        Head = Head->next;
    }
}

void insertPos(struct Node* Head,int data1,int pos){

    if (pos < 1)
    {
        printf("Invalid value");
        return;
    }   
    else{

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode ->data = data1;
        newNode ->next = NULL;

        if (pos == 1)
        {
            newNode ->next = Head;
            Head = newNode;
        }
        
        struct Node* curr = Head;
        for (int i = 1; i < (pos - 1); i++)
        {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

int main(){

Head = NULL;

int n;

printf("Enter value for how many nodes to be created:\n");
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    int x;//data and x will change every time
    printf("Enter data for each node:\n");
    scanf("%d",&x);
    createNode(x,i);
}

printList(Head); //before change

int data1,pos;

printf("Enter data for the newNode and the position where you want it to be inserted:\n");
scanf("%d %d",&data1,&pos);

insertPos(Head,data1,pos);

printList(Head);

    return 0;
}