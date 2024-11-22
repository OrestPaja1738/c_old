#include <stdio.h>

int function(int arr[],int n){

int maxNr = -1000;

for (int i = 0; i < n; i++)
{
    printf("Enter array value \n");
    scanf("%d",&arr[i]);
    if (i % 2 == 0)
    {
        if (arr[i] > maxNr)
        {
            maxNr = arr[i];
        }       
    }  
}
    return maxNr;
}

int main(){

int n;
printf("Enter n:\n");
scanf("%d",&n);

int arr[n];

int output = function(arr,n);

printf("Output : %d",output);

    return 0;
}