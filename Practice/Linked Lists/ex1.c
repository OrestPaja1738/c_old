#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;

    struct Node* next;
};

void traversal(struct Node* A){

    struct Node* temp = A;

    while (temp != NULL)
    {
        printf("%d \n",temp->data);

        temp = temp->next;
    }
    
}

int main(){

//Create a linked list with 3 nodes manually. Create each node one by one and then connect them

struct Node* A = NULL;

struct Node* node = (struct Node*)malloc(sizeof(struct Node));

node ->data = 10;
node ->next = NULL;

A = node;

struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));

node2 ->data = 20;
node2 ->next = NULL;

node ->next = node2;

struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));

node3 ->data = 60;
node3 -> next = NULL;

node2 ->next = node3;

traversal(A);

    return 0;
}