#include <stdio.h>

void getData(int m,int arr[][m],int n){

puts("getData\n");

for (int i = 0; i < n; i++)
{
    int min = 1000;
    for (int j = 0; j < m; j++)
    {
        scanf("%d",&arr[i][j]);
        if (arr[i][j] < min)
        {
            min = arr[i][j];
        }     
    }
    
    for (int k = 0; k < m; k++)
    {
        arr[i][k] -= min;
    }
}
}

void printNew(int m,int arr[][m],int n){

puts("printNew\n");

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
}

int main(){

int n,m;

printf("Enter value for rows:(n) and columns(m): \n");
scanf("%d %d",&n,&m);

int arr[n][m];

getData(m,arr,n);
printNew(m,arr,n);

    return 0;
}