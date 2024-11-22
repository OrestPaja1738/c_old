#include <stdio.h>

void getData(int n,int arr[][n],int m){

puts("getData\n");

for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr[i][j]);
    } 
}
}

void productColumns(int n,int arr[][n],int m,int a,int b){

puts("productColumns\n");

int sum1 = 0,sum2 = 0;

for (int i = 0; i < m; i++)
{
    sum1 += arr[i][(a - 1)];
    sum2 += arr[i][(b - 1)];
}

int total = sum1 + sum2;

printf("Product of col.%d : %d \n Prod of col.%d : %d \n Total prod. : %d",a,sum1,b,sum2,total);

}

int main(){

int m,n;
int a,b;
printf("Enter value for m and n:\n");
scanf("%d %d",&m,&n);

int arr[m][n];

getData(n,arr,m);
printf("Enter value for the columns you want to find the summations of:\n");
scanf("%d %d",&a,&b);

productColumns(n,arr,m,a,b);

    return 0;
}