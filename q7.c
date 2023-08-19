#include<stdio.h>
#include<string.h>
void main()
{
    int number_of_names,i,j;
    printf("Enter the number of students :");
    scanf("%d",&number_of_names);
    printf("Enter names: \n");
    char name[number_of_names][20],temp[20];
    for(i=0;i<number_of_names;i++)
    {
        fflush(stdin);
        gets(name[i]);
    }
    for(j=1;j<number_of_names;j++)
    for(i=0;i<number_of_names-j;i++)
    {
        if(strcmp(name[i],name[i+1])>0)
        {
            strcpy(temp,name[i]);
            strcpy(name[i],name[i+1]);
            strcpy(name[i+1],temp);
        }
    }
    printf("---------------\n");
    for(i=0;i<number_of_names;i++)
    {
    fflush(stdin);
    printf("%s \n",name[i]);
    }
}