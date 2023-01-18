//value of febonaci number at position no. n which is given by user//
#include<stdio.h>
int feb(int n)
{
    if(n==1||n==2)
    {
        return (n-1);
    }
    else
    {
        return(feb(n-1)+feb(n-2));
    }
}
int main()
{
    int n;
    printf("Enter any number= ");
    scanf("%d",&n);
    printf("Value of febonaci number at position  of no %d of febonaci series = %d",n,feb(n));
}