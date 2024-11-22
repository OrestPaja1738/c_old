#include <stdio.h>
#include <stdlib.h>

struct Node{

int number;

    struct Node* next;
};

#include "insert_beginning.h"

int main(){

Head = NULL;

int n,x;
printf("Enter value for n:\n");
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    printf("Enter value for number \n");
    scanf("%d",&x);

    insertBeginning(x,&Head);
}

printf("\n");

printList();

    return 0;
}