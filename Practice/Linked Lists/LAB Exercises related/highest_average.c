#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 20

struct Node{

    char name[size],surname[size];
    float avg;

    struct Node* next;
};

struct Node* Head;

struct Node* createNode(struct Node* Head,char name[],char surname[]){

int sum = 0,cnt = 0;
int grade;

struct Node* node = (struct Node*)malloc(sizeof(struct Node));
strcpy(node->name,name);
strcpy(node->surname,surname);


printf("Enter grade:\n");
while (1)
{
    scanf("%d",&grade);
    if (grade == -1)
    {
        break;
    }
    else{
        sum += grade;
        cnt++;
    }
}

node->avg = sum / (float)cnt;
node->next = NULL;


    return node;
}

void insertSort(struct Node** Head,struct Node* newNode){

puts("insertSort\n");

    if (*Head == NULL || (*Head)->avg > newNode->avg)
    {
        newNode ->next = *Head;
        *Head = newNode;
    }   
    else{
        struct Node* curr = *Head;

        while (curr->next != NULL && curr->next->avg < newNode ->avg)
        {
            curr = curr->next;
        }
        newNode ->next = curr->next;
        curr->next = newNode;
    }
}

void printMax(struct Node* Head){

float maxAvg = -100.0;
char maxName[size],maxSurname[size];

    while (Head != NULL)
    {
        if (Head->avg > maxAvg)
        {
            maxAvg = Head->avg;
            strcpy(maxName,Head->name);
            strcpy(maxSurname,Head->surname);
        }
        Head = Head->next;
    }
    
    printf("\n");
    printf("%s %s %.1f",maxName,maxSurname,maxAvg);
}

int main(){

//logic is same but i need to add some if statements because of problem bullshit relating
//to the if statements where avg is calculated

struct Node* newNode;
Head = NULL;
int n;
char name[size],surname[size];

printf("Enter nr of students:\n");
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    printf("Enter name and surname:\n");
    scanf("%s %s",name,surname);
    newNode = createNode(Head,name,surname);
    insertSort(&Head,newNode);
}

printMax(Head);

while (Head != NULL)
{
    struct Node* temp = Head;
    Head = Head->next;
    free(temp);
}

    return 0;
}