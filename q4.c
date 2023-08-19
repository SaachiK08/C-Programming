#include<stdio.h>
void swap(int *p, int *q);
void main()
{
    int n1,n2;
    printf("Enter a number :");
    scanf("%d %d",&n1,&n2);
    printf("Number before swapping are %d %d\n\n",n1,n2);
    swap(&n1,&n2); //call the swap function to interchange values
    printf("Number after swapping are %d %d",n1,n2);
}
void swap(int *p, int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}