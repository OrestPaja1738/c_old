#include <stdio.h>
#include <string.h>
#define CH_S 20
#define A 4

int main(){

int n;

printf("Enter the number of students:\n");
scanf("%d",&n);

char name[n][CH_S];
int grade[n][A];

getName(name,n);
getGrade(grade,n);

double classAVG = getClassAVG(grade,n);

printf("Class Average: %.2lf \n",classAVG);

sortAverages(grade,n);




    return 0;
}

void getName(char name[][CH_S],int n){

printf("Enter the name for each student:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%s",name[i]);
    }
}

void getGrade(int grade[][A],int n){

printf("Enter grades for each student in 4 assignements:\n");

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < A; j++)
    {
        scanf("%d",&grade[i][j]);
    }
}
}

double getClassAVG(int grade[][A],int n){

double arr[n];
double avgSum = 0;
double result;

for (int i = 0; i < n; i++)
{
    int sum = 0;

    for (int j = 0; j < A; j++)
    {
        sum += grade[i][j];
    }
    arr[i] = sum / (double)A;
}

for (int i = 0; i < n; i++)
{
    avgSum += arr[i];
}

result = avgSum / (double)n;

    return result;
}

void sortAverages(int grade[][A],int n){

double averagesArr[n];

for (int i = 0; i < n; i++)
{
    int sum2 = 0;

    for (int j = 0; j < A; j++)
    {
        sum2 += grade[i][j];
    }
    averagesArr[i] = sum2 / (double)A;
}

//SORTING OF ARRAY IN ORDER TO FIND MIN AND MAX



}