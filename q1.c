#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollnumber;
    int marks;
};

int main()
{
    struct student s[100];
    int i,n,j,temp;
    char store[20];
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(i<0;i<n;i++)
    {
        printf("Enter student's name, Roll no., marks\n");
        scanf("%s%d%d",s[i].name,&s[i].rollnumber,&s[i].marks);
    }
    printf("------------------------------\n");
    for(i=1;i<n;i++)
    for(j=0;j<n-i;j++)
    if(s[j].marks<s[j+1].marks)
    {
        temp=s[j].marks;
        s[j].marks=s[j+1].marks;
        s[j+1].marks=temp;

        strcpy(store,s[j].name);
        strcpy(s[j].name,s[j+1].name);
        strcpy(s[j+1].name,store);

        temp=s[j].rollnumber;
        s[j].rollnumber=s[j+1].rollnumber;
        s[j+1].rollnumber=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("name: %s \troll no.: %d \tmarks %d",s[i].name,s[i].rollnumber,s[i].marks);
        printf("\tGrade: ");
        if(s[i].marks>90)
        printf("A");
        else if(s[i].marks>80)
        printf("B");
        else if(s[i].marks>70)
        printf("C");
        else if(s[i].marks>60)
        printf("D");
        else 
        printf("F");
        if(s[i].marks<40)
        s[i].marks+=5;
        if(s[i].marks>40)
        printf("\tPass");
        else
        printf("\tFailed");
        printf("\n\n");
    }
}