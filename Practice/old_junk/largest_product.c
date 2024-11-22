#include <stdio.h>

int main(){

int n;

printf("Enter value for n:\n");
scanf("%d",&n);

int arr[n];

getInput(n,arr);
sortArray(n,arr);
findLargestTWO(n,arr);

    return 0;
}

void getInput(int n,int arr[]){

for (int i = 0; i < n; i++)
{
    printf("Enter value:\n");
    scanf("%d",&arr[i]);
}
}

void sortArray(int n,int arr[]){

int temp;

for (int i = 0; i < (n - 1); i++)
{
    for (int j = (i + 1); j < n; j++)
    {
        if (arr[i] > arr[j])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
}

void findLargestTWO(int n,int arr[]){

int firstLargest = arr[1];
int secondLargest = arr[0];

for (int i = 2; i < n; i++)
{
    if (arr[i] > firstLargest)
    {
        secondLargest = firstLargest;
        firstLargest = arr[i];
    }   
}

printf("%d %d",secondLargest,firstLargest);
}