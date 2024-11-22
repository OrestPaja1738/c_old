#include <stdio.h>

void function(int m,int arr[][m],int n){

int indexSaver[m];
int count = 0;

for (int j = 0; j < m; j++)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i][j] == 11)
        {
            cnt++;
        }
    }
    if (cnt >= 2)
    {
        indexSaver[count++] = j;
    }
}

printf("\nThis are the indexes of rows with more than three elements:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d \n",indexSaver[i]);
    }
}

int main(){

int n,m;
printf("Enter value for n and m:\n");
scanf("%d %d",&n,&m);

int arr[n][m];

printf("Enter value for array\n");
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}


function(n,arr,m);

    return 0;
}