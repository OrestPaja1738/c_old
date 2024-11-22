#include <stdio.h>

int main(){

int n;

FILE *ptr;

ptr = fopen("Text2.txt","w");

if (ptr == NULL)
{
    printf("Error!");
    return 0;
}

printf("Enter value for n:\n");
scanf("%d",&n);

int arr[n];

for (int i = 0; i < n; i++)
{
    printf("Enter value for array \n");
    scanf("%d",&arr[i]);
    fprintf(ptr,"%d ",arr[i]);
}

fclose(ptr);

    return 0;
}