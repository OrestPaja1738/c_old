#include <stdio.h>

int returner(int arr[],int n){

if (n == 0)
{
    return arr[0];
}

int min = returner(arr,n - 1);

if (arr[n] < min)
{
    return arr[n];
}
else{
    return min;
}
}

int main(){

int n;
printf("Enter n:\n");
scanf("%d",&n);

int arr[n];

for (int i = 0; i < n; i++)
{
    printf("Enter array value");
    scanf("%d",&arr[i]);
}

int output = returner(arr,n);

printf("Lol %d",output);

    return 0;
}