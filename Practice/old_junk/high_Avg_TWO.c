#include <stdio.h>
#include <string.h>
#include <float.h>

int main(){

int n;

printf("Enter value for n:\n");
scanf("%d",&n);

char name[n][20];
char surname[n][20];
int grade[n];
double averages[n];

getData(n,name,surname,grade,averages);
sortHighestAvg(n,averages);
getMaxValues(n,name,surname,averages);

    return 0;
}

void getData(int n,char name[][20],char surname[][20],int grade[],double averages[]){

int tempGrade;
int sum = 0;
int cnt = 0;

for (int i = 0; i < n; i++)
{
    printf("Enter name and surname:\n");
    scanf("%s %s",name[i],surname[i]);

    while (1)
    {
        printf("Enter grade:\n");
        scanf("%d",&tempGrade);

        if (tempGrade == -1)
        {
            break;
        }
        
        grade[cnt++] = tempGrade; //cnt esht qe te hapi slots qe te ruhen grades ne memorie
        sum += tempGrade;
    }
    averages[i] = sum / (double)cnt;
}
}

void sortHighestAvg(int n,double averages[]){

double temp;

for (int i = 0; i < n - 1; i++)
{
    for (int j = (i + 1); j < n; j++)
    {
        if (averages[i] > averages[j])
        {
            temp = averages[i];
            averages[i] = averages[j];
            averages[j] = temp;
        }
    }
}
}

void getMaxValues(int n,char name[][20],char surname[][20],double averages[]){

char MaxName[20];
char MaxSurname[20];
double maxAvg = -DBL_MAX;

for (int i = 0; i < n; i++)
{
    if (averages[i] > maxAvg)
    {
        maxAvg = averages[i];
        strcpy(MaxName,name[i]);
        strcpy(MaxSurname,surname[i]);
    }
}

printf("The student with highest average is : %s %s with the average : %.3lf",MaxName,MaxSurname,maxAvg);

}