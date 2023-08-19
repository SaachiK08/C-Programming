#include<stdio.h>

union info
{
    char name[20];
    int ID;
};

void main()
{
    union info i;
    int temp;
    printf("Enter your Info: \n1. Name\n2. ID number\nEnter your choice");
    scanf("%d",&temp);
    switch(temp)
    {
        case 1:
        printf("Enter Your Name : ");
        scanf("%s",&i.name);
        break;
        case 2:
        printf("Enter your ID Number: ");
        scanf("%d",&i.ID);
        break;
        default :
        printf("invalid choice");
    }
    if(temp==1)
    printf("Name Entered is %s",i.name);
    if(temp==2)
    printf("ID Number entered is %d",i.ID);
}