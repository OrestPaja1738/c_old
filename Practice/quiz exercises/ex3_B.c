#include <stdio.h>

void getData(int m,int arr[][m],int n){

puts("getData\n");

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        scanf("%d",&arr[i][j]);
    }   
}
}

void sumDiagonals(int m,int arr[][m],int n){

puts("sumDiagonals\n");

int sum = 0,a = 0;

if (n == m)
{
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        a += arr[i][n - i - 1];
    }
    

    int total = sum + a;

    printf("Output : \nMain : %d\nSecondary : %d\nSum : %d\n",sum,a,total);
}
else{
    printf("The given matrix is not a square matrix");
}
}

int main(){

int n,m;

printf("Enter value for n and m:\n");
scanf("%d %d",&n,&m);

int arr[n][m];

getData(m,arr,n);
sumDiagonals(m,arr,n);

    return 0;
}