//factorial by function//
#include<stdio.h>
int fact(int n)
{
    int f,i;
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,x;
    printf("Enter any number= ");
    scanf("%d",&n);
    x=fact(n);
    printf("Factorial is = %d",x);
}
