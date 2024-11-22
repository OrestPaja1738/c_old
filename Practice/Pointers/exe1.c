#include <stdio.h>

int main(){

int a;
int *p = NULL;

printf("Enter value for a:\n");
scanf("%d",&a);

printf("The location of a:%p \n",&a);
printf("The location of p:%p \n",&p);

p = &a;

printf("The content of a:%d \n",a);
printf("The content of p:%p \n",p);

printf("Value pointed by p: %d,location of p: %p,content of p:%p",*p,&p,p);

    return 0;
}