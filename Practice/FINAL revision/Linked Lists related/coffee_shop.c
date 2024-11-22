#include <stdio.h>
#include <stdlib.h>

struct Order{

    int ID;
    int totalPrice;

    struct Order* next;
};

struct Order* Head;

void createNode(struct Order** Head,int orderID,int orderTP){

struct Order* node = (struct Order*)malloc(sizeof(struct Order));
node->ID = orderID;
node->totalPrice = orderTP;
node->next = NULL;

    if (*Head == NULL)
    {
        node->next = *Head;
        *Head = node;
    }
    
    else{

        struct Order* curr = *Head;

        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        
        curr->next = node;
    }
}

void deleteNode(struct Order** Head,int key){

    struct Order *temp = *Head,*prev = NULL;

    if (temp != NULL && temp->ID == key)
    {
        *Head = temp->next;
        free(temp);
        return;
    }
    
    else{

        while (temp->next != NULL && temp->next->ID != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) return;
        
        prev->next = temp->next;
        free(temp);
    }
}

void printingOrders(struct Order* Head,const char* filename){

    FILE* file = fopen(filename,"w");

    if (file == NULL)
    {
        printf("\nCouldnt open file!");
        return;
    }
    
    struct Order* curr = Head;

    while (curr != NULL)
    {
        fprintf(file,"Order ID: %d, Total Price: %d\n", curr->ID, curr->totalPrice);
        curr = curr->next;
    }
    
    fclose(file);
}

int main(){

Head = NULL;

int orderID,orderTP,key;
int input;

    while (1)
    {
        printf("Enter option for input!\n");
        scanf("%d",&input);

        switch (input)
        {
        case 1://adding order
            printf("Enter order ID and total price!\n");
            scanf("%d %d",&orderID,&orderTP);
            createNode(&Head,orderID,orderTP);
            break;
        case -1://serving order
            printf("Enter the ID key of the order to be served!\n");
            scanf("%d",&key);
            deleteNode(&Head,key);
            break;
        case 2://printing pending orders into a file
            printingOrders(Head,"orders.txt");
            break;
        default:
            return 0; // getting out of loop
            break;
        }
    }

    return 0;
}