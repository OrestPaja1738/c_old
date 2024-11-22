#include <stdio.h>

int function(int arr[],int n){

int maxNr = -1000;
int minNr = 1000;

for (int i = 0; i < n; i++)
{
    printf("Enter value\n");
    scanf("%d",&arr[i]);

    if (arr[i] > maxNr)
    {
        maxNr = arr[i];
    } 
    if (arr[i] < minNr)
    {
        minNr = arr[i];
    }
}

int sum = minNr + maxNr;

    return sum;
}


int main(){

int n;
printf("Enter value for n:\n");
scanf("%d",&n);

int arr[n];

int output = function(arr,n);

printf("Output : %d",output);


    return 0;
}