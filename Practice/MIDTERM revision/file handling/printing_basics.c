#include <stdio.h>

int main(){

FILE *ptr;
ptr = fopen("Text1.txt","w");

if (ptr == NULL)
{
    printf("Error!");
    return 0;
}
else{

fprintf(ptr,"HELLO CEN STUDENT");
printf("Message printed succesfully!\n");

fclose(ptr);
}
    return 0;
}