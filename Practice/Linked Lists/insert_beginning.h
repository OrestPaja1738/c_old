struct Node* Head;

void insertBeginning(int x,struct Node **Head){

struct Node* node = (struct Node*)malloc(sizeof(struct Node));
node ->number = x;

node ->next = *Head;
*Head = node;
}

void printList(){

while (Head != NULL)
{
    printf("%d \n",Head->number);
    Head = Head ->next;
}
}