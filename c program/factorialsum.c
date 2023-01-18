/* 1! + 2! + 3! +.......*/
#include<stdio.h>
int main()
{
    int i,j,fact,n;
    int sum=0;
    printf("Enter any no n. = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("%d",sum);
    return 0;
}