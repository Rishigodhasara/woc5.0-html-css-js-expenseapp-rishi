#include<stdio.h>
//sum of N natural numbers//
int main()
{
    int i,n,sum;
    sum=0;
    printf("Enter any natural no.=");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}