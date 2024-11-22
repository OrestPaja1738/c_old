#include <stdio.h>
#include <float.h>

void findMaxOneTwo(float arr[],int n,float* max1,float* max2){

*max1 = -FLT_MAX;
*max2 = -FLT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *max1)
        {
            *max2 = *max1;
            *max1 = arr[i];
        }
        else if (arr[i] > *max2 && arr[i] < *max1)
        {
            *max2 = arr[i];        
        }       
    }
}

int main(){

/*Write a program that reads from the user an array with floats and prints on the screen the
first and the second maximum. The elements stored in the array are different from each
other.
You should use this function to find the first and second max:
void max12(float a[], int n, float *max1, float *max2);*/

float max1,max2;

int n;
printf("Enter value for n:\n");
scanf("%d",&n);

float arr[n];

for (int i = 0; i < n; i++)
{
    printf("Enter value for array:\n");
    scanf("%f",&arr[i]);
}

findMaxOneTwo(arr,n,&max1,&max2);

printf("max float1 is %.1f and max float2 is : %.1f",max1,max2);
    
    
    return 0;
}