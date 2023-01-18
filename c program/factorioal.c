#include<stdio.h>
//factorial of any natural number//
int main()
{
    int i,n,fac;
    fac=1;
    printf("Enter any number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("factorial=%d",fac);
    return 0;
}