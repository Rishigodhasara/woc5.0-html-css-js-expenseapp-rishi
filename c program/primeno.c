#include<stdio.h>
//check entered number is prime or not//
int main()
{
    int i,n,p;
    printf("Enter any no.=");
    scanf("%d",&n);
    p=0;
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            p=1;
        }
    }
    if(p==1)
    {
        printf("number is not prime");
    }
    else
    {
        printf("number is prime");
    }
    return 0;
}