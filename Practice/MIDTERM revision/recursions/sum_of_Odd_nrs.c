#include <stdio.h>

int sum = 0;

int sumOfOdd(int a,int b){

puts("Start:\n");

if (a == b)
{
    return;
}


sumOfOdd(a + 1,b);

if (a % 2 != 0)
{
    sum += a;
}

    return sum;
}

int main(){

int a,b;
printf("Enter first number(a) and second number (b)\n");
scanf("%d %d",&a,&b);

int output = sumOfOdd(a,b);
printf("Output : %d",output);

    return 0;
}