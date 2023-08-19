#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,l,flag=0;
    printf("Enter a string :\n");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0;i<l;i++)
    if(str[i]!=str[l-i-1])
    {
        flag=1;
        break;
    }
    if(flag)
    printf("Not a Pallindrome");
    else
    printf("Pallindrome");
}