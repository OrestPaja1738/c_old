#include <stdio.h>

int main(){

int n,target;

printf("Enter n value \n");
scanf("%d",&n);

printf("Enter your target:\n");
scanf("%d",&target);

int right = n - 1;
int arr[n];

readArray(n,arr);

int find_position = result(arr,target,right,0);

printf("Result is %d",find_position);

    return 0;
}

void readArray(int n,int arr[]){

    for (int i = 0; i <= (n - 1); i++)
    {
        printf("Enter array number:\n");
        scanf("%d",&arr[i]);
    }
}

int result(int arr[],int target,int right,int left){

int mid;

while (left <= right)
{
    mid = (left + right) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] < target)
    {
        left = mid + 1;
    }
    if (arr[mid] > target)
    {
        right = mid - 1;
    }
}
    return -1;
}