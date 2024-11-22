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

void timesAppears(int m,int arr[][m],int n,int value){

puts("timesAppears\n");

int cnt = 0;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if (arr[i][j] == value)
        {
            cnt++;
        }     
    }  
}

printf("Number %d appears %d times in 2D Array",value,cnt);

}

int main(){

int n,m,value;

printf("Enter value for n and m:\n");
scanf("%d %d",&n,&m);
printf("Enter value you want to search:\n");
scanf("%d",&value);

int arr[n][m];

getData(m,arr,n);
timesAppears(m,arr,n,value);

    return 0;
}