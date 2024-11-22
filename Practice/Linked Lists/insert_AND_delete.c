#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;

    struct Node* next;
};

struct Node* Head;

struct Node* createNode(struct Node* Head,int data){

struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
temp->data = data;
temp->next = NULL;

    return temp;
}

void insertSort(struct Node** Head,struct Node* node){

    if (*Head == NULL || (*Head)->data > node->data)
    {
        node->next = *Head;
        *Head = node;
    }
    
    else{

        struct Node* curr = *Head;

        while (curr->next != NULL && curr->next->data < node->data)
        {
            curr = curr->next;
        }
        
        node->next = curr->next;
        curr->next = node;
    }
}

void printList(struct Node* Head){

while (Head != NULL)
{
    printf("%d \n",Head->data);
    Head = Head->next;
}
}

void deleteNode(struct Node** Head,int key){

struct Node* temp = *Head,*prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *Head = temp->next;
        free(temp);
        return;
    }
    
    else{

        while (temp->next != NULL && temp->data != key)
        {
            prev = temp;
            temp  = temp->next;
        }
        
    	prev->next = temp->next;
        free(temp);
    }
}

int main(){

struct Node* node;

Head = NULL;
int n,data;

printf("Enter value for n:\n");
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    printf("Enter value for data:\n");
    scanf("%d",&data);
    node = createNode(Head,data);
    insertSort(&Head,node);
}

printf("OLD (sorted) List: \n");
printList(Head);

printf("\n");

int key;
printf("Enter value for key:\n");
scanf("%d",&key);

deleteNode(&Head,key);

printf("\n");
printf("NEW (sorted) List: \n");
printList(Head);

while (Head != NULL)
{
    struct Node* temp = Head;
    Head = Head->next;
    free(temp);
}

    return 0;
}