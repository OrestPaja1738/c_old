#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;

    struct Node* next;
};

void traversal(struct Node *A){

struct Node* temp = A;

while (temp != NULL)
{
    printf("Data : %d \n",temp->data);
    temp = temp ->next;
    
}

}

int main(){

struct Node *A = NULL,*newNode = NULL,*previousNode = NULL;
int n;

printf("Enter value for n: \n");
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data for node %d \n",i + 1);
    scanf("%d",&newNode->data);

    newNode->next = NULL;

    if (i == 0)
    {
        A = newNode;
    }
    else{
        previousNode->next = newNode;
    }

    previousNode = newNode;
}

traversal(A);

    return 0;
}