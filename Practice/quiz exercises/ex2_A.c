#include <stdio.h>

float function(int arr[],int n){

int sum = 0,cnt = 0;
float avg = 0;

for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
    if (arr[i] % 2 != 0)
    {
        sum += arr[i];
        cnt ++;
    }
}

avg = sum / (float)cnt;

    return avg;
}

int main(){

int n;
scanf("%d",&n);

int arr[n];

float output = function(arr,n);

printf("Output : %.2f",output);

    return 0;
}