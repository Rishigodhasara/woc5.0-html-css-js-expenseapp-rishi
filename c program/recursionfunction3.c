//sum of n natural number by recursion function//
#include<stdio.h>
int natsum(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    else
    {
        return(n+natsum(n-1));
    }
}
int main()
{
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    printf("Sum of %d natural number is = %d",n,natsum(n));
}