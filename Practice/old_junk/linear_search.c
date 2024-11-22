#include <stdio.h>

int main(){

int n;

printf("Enter n \n");
scanf("%d",&n);

int arr[n];

readArray(n,arr);

int index = find_index(n,arr);

printf("The number's index is %d",index);

    return 0;
}

void readArray(int n,int arr[]){

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}

int find_index(int n,int arr[]){

int target;

printf("Which number,do you want to find index of ?\n");
scanf("%d",&target);

for (int i = 0; i < n; i++)
{
    if (target == arr[i])
    {
        return i;
    }
}

    return -1;
}