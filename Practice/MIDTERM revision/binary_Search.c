#include <stdio.h>

void getData(int arr[],int n){

puts("getData");

for (int i = 0; i < n; i++)
{
    printf("Enter value: \n");
    scanf("%d",&arr[i]);
}

//sorting data

for (int i = 0; i < n - 1; i++)
{
    for (int j = i + 1; i < n; j++)
    {
        if (arr[i] > arr[j])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }   
    } 
}
}

int main(){

int n;
printf("Enter value for n:\n");
scanf("%d",&n);

int arr[n];

getData(arr,n);

//binary search requires sorted arrays/values



    return 0;
}