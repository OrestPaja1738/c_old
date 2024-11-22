#include <stdio.h>
#define size 15
#define max 4

struct Student
{
    char name[size];
    char surname[size];
    int grade;
    float average;
};

void getData(struct Student st[],int n){

puts("getData\n");

for (int i = 0; i < n; i++)
{
    int sum = 0;

    printf("Enter name and surname:\n");
    scanf("%s %s",st[i].name,st[i].surname);

    printf("Enter four grades:\n");

    for (int j = 0; j < max; j++)
    {
        scanf("%d",&st[i].grade);
        sum += st[i].grade;
    }
    
    st[i].average = sum / 4.0;
}
}

void sortStruct(struct Student st[],int n,int m){

puts("sortStruct\n");

struct Student temp;

for (int i = 0; i < (n - 1); i++)
{
    for (int j = 0; j < (n - i - 1); j++)
    {
        if (st[j].average < st[j + 1].average)
        {
            struct Student temp = st[j];
            st[j] = st[j + 1];
            st[j + 1] = temp;
        } 
    }
}

printf("Top students are:\n");

for (int i = 0; i < m && i < n; i++)
{
    printf("%s %s : %.2f \n",st[i].name,st[i].surname,st[i].average);
}
}

int main(){

int n,m;
printf("Enter value for n:\n");
scanf("%d",&n);

struct Student st[n];

getData(st,n);

printf("Enter value for top m-th students:\n");
scanf("%d",&m);

sortStruct(st,n,m);

    return 0;
}