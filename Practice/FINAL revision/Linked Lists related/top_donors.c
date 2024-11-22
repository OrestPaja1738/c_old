#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 12

struct donor{

    char name[size],surname[size];
    float data;

    struct donor* next;
};

struct donor* Head;

struct donor* createNode(char donorName[],char donorSurname[],float donorData){

    struct donor* node = (struct donor*)malloc(sizeof(struct donor));
    strcpy(node->name,donorName);
    strcpy(node->surname,donorSurname);
    node->data = donorData;
    node->next = NULL;

    return node;
}

void insertSort(struct donor** Head,struct donor* node){

    if (*Head == NULL || (*Head)->data > node->data)
    {
        node->next = *Head;
        *Head = node;
    }
    
    else{

        struct donor* curr = *Head;

        while (curr->next != NULL && curr->next->data < node->data)
        {
            curr = curr->next;
        }
        
        node->next = curr->next;
        curr->next = node;
    }
}

void listTraversal(struct donor* Head,FILE* printer,int n,int m){

struct donor* temp = Head;

    for (int i = (n - 1); i >= (n - m); i--)
    {
        fprintf(printer,"%s %s %.1f\n",temp->name,temp->surname,temp->data);
        temp = temp->next;
    }
    
}

int main(){

struct donor* node;
Head = NULL;

FILE* file = fopen("input.txt","r");

    if (file == NULL)
    {
        printf("Error opening file !\n");
        return EXIT_FAILURE;
    }

FILE* printer = fopen("output.txt","w");

    if (printer == NULL)
    {
        printf("Error opening file !\n");
        return EXIT_FAILURE;
    }
    

int n,m; //m is to print top m donor,while n is nr of donors
char donorName[size],donorSurname[size];
float donorData;

fscanf(file,"%d %d",&n,&m);

for (int i = 0; i < n; i++)
{
    fscanf(file,"%s %s %f",donorName,donorSurname,&donorData);
    node = createNode(donorName,donorSurname,donorData);
    insertSort(&Head,node);
}

fclose(file);

listTraversal(Head,printer,n,m);

fclose(printer);

    return EXIT_SUCCESS;
}