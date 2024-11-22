#include <stdio.h>
#include <string.h>
#define size 15

struct Student{

    char name[size];
    int grade;
    double average;
};

void getData(struct Student st[],int n){

puts("getData\n");

for (int i = 0; i < n; i++)
{
    int sum = 0;
    int cnt = 0;

    printf("Enter name of student:\n");
    scanf("%s",st[i].name);

    while (1)
    {
        printf("Enter grade of student:\n");
        scanf("%d",&st[i].grade);

        if (st[i].grade == -999)
        {
            break;
        }
        
        sum += st[i].grade;
        cnt++;
    }
    st[i].average = sum / (double)cnt;
}
}

void sortData(struct Student st[],int n){

puts("sortData");

struct Student temp;

for (int i = 0; i < (n - 1); i++)
{
    for (int j = (i + 1); j < n; j++)
    {
        if (st[j].average < st[i].average)
        {
            temp = st[i];
            st[i] = st[j];
            st[j] = temp;
        }        
    }
}
}

void printOutput(FILE *ptr,struct Student st[],int n){

puts("printOutput\n");

double max = -10000.0;
char maxName[size];

for (int i = 0; i < n; i++)
{
    if (st[i].average > max)
    {
       max = st[i].average;
       strcpy(maxName,st[i].name);
    }
}

printf("TASK COMPLETED SUCCESFULLY\n");
fprintf(ptr,"%s %.3lf",maxName,max);

}

int main(){

int n;
printf("Enter value for n:\n");
scanf("%d",&n);

struct Student st[n];

FILE *ptr;

ptr = fopen("Text3.txt","w");

if (ptr == NULL)
{
    printf("Error!\n");
    return 0;
}

getData(st,n);
sortData(st,n);
printOutput(ptr,st,n);

fclose(ptr);

    return 0;
}