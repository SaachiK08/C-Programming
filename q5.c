#include<stdio.h>
int factorial(int n);
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(n));
}
int factorial(int n)
{
    if(n==0)
    return 1;
    if(n>0)
    {
        return n*factorial(n-1);
    }
}