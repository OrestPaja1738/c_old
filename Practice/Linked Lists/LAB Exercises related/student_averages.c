#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 20

struct Node
{
    int g1;
    int g2;
    char name[size];
    float avg;


    struct Node* next;
};

struct Node* Head;

struct Node* createNode(int grade1,int grade2,char studentName[]){

struct Node* node = (struct Node*)malloc(sizeof(struct Node));
node ->g1 = grade1;
node ->g2 = grade2;
strcpy(node->name,studentName);
node ->avg = (grade1 + grade2) / 2.0;

node ->next = NULL;

    return node;
}

void insertSort(struct Node** Head,struct Node* node){

    if (*Head == NULL || (*Head)->avg > node->avg)
    {
        node->next = *Head;
        *Head = node;
    }
    
    else{

        struct Node* curr = *Head;

        while (curr ->next != NULL && curr->next->avg < node->avg)
        {
            curr = curr->next;
        }
        
        node->next = curr ->next;
        curr->next = node;
    }
}

void printList(struct Node* Head){

    while (Head != NULL)
    {
        printf("%s %.2lf \n",Head->name,Head->avg);
        Head = Head->next;
    }
}

int main(){

Head = NULL;
struct Node* node;

int n;
int grade1,grade2;
char studentName[size];

printf("Enter number of students:\n");
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    printf("Enter name:\n");
    scanf("%s",studentName);
    printf("Enter 2 grades :\n");
    scanf("%d %d",&grade1,&grade2);
    node = createNode(grade1,grade2,studentName);

    insertSort(&Head,node);
}

printList(Head);

    return 0;
}