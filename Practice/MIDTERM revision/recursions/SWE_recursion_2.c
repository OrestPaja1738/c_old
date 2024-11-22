#include <stdio.h>

int power(int n,int m){

puts("Start\n");
if (n == 0)
{
    return m;
}

return m * power(n - 1,m);
}

int main(){

int m,n;

printf("Enter base(m) and power(n):\n");
scanf("%d %d",&m,&n);

int output = power(n,m);

printf("Output:%d",output);

}