#include<stdio.h>
#include<string.h>
struct student
{
    char name[20],tn[20];
    int rollnumber;
};

struct marks
{
    int P;
    int C;
    int M;
    int total;
    
    struct student std;
};

void main()
{
    int i,j,n,temp,t1,t2,t3,tr;
    struct marks msheet[100];
    printf("Enter the no. of students :");
    scanf("%d",&n);
    for(i=0;i<n;i++)   //Data input 
    {
        printf("Enter Student's Name : ");
        scanf("%s",msheet[i].std.name);
        printf("Enter Roll no : ");
        scanf("%d",&msheet[i].std.rollnumber);
        printf("Marks obtained in Physics,Chemistry and Maths respectively : ");
        scanf("%d%d%d",&msheet[i].P,&msheet[i].C,&msheet[i].M);
    }
    for(i = 0 ; i < n ; i++)
    {
        msheet[i].total=msheet[i].P+msheet[i].C+msheet[i].M;
    }
    for(i = 0 ; i < n ; i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(msheet[i].total>msheet[j].total)
            {
                strcpy(msheet[i].std.tn, msheet[i].std.name);
                strcpy(msheet[i].std.name, msheet[j].std.name);
                strcpy(msheet[j].std.name, msheet[i].std.tn);
                tr = msheet[i].std.rollnumber;
                msheet[i].std.rollnumber = msheet[j].std.rollnumber;
                msheet[j].std.rollnumber = tr;
                t1 = msheet[i].P;
                msheet[i].P = msheet[j].P;
                msheet[j].P = t1;
                t2 = msheet[i].C;
                msheet[i].C = msheet[j].C;
                msheet[j].C = t2;
                t3 = msheet[i].M;
                msheet[i].M = msheet[j].M;
                msheet[j].M = t3;
                temp=msheet[i].total;
                msheet[i].total=msheet[j].total;
                msheet[j].total=temp;
            }
        }
    }
    printf("\n--------------------\n");
    for(i=0;i<n;i++)
    {
    printf("Name: %s\tRollno.: %d\tPhysics: %d\tChemistry: %d\tMaths: %d\tTotal: %d",msheet[i].std.name,msheet[i].std.rollnumber,msheet[i].P,msheet[i].C,msheet[i].M,msheet[i].total);
    printf("\n\n");
    }
}