#include <stdio.h>
int sum = 0;

int sumOfNumbers(int arr[],int n,int a,int b){

puts("Start\n");

if (n == 0)
{
    return arr[n];
}

sumOfNumbers(arr,n - 1,a,b);

if (n >= a && n<= b)
{
    sum += arr[n];
}

return sum;
}

int main(){

int n;
int a,b;

printf("Enter n:\n");
scanf("%d",&n);

int arr[n];

printf("Enter top position(b) and bottom pos.(a) :\n");
scanf("%d %d",&b,&a);

for (int i = 0; i < n; i++)
{
    printf("Enter value for array:\n");
    scanf("%d",&arr[i]);
}

int output = sumOfNumbers(arr,n,(a - 1),(b - 1));

printf("Output: %d",output);

    return 0;
}