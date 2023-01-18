#include<stdio.h>
//Enter any number for find febonaki series in which number of series's element is equal to number which is given by user// 
int main()
{
    int i,n,n1,n2,x;
    printf("Enter any no.=");
    scanf("%d",&n);
    n1=0;
    printf("%d\n",n1);
    n2=1;
    printf("%d",n2);
    for(i=1;i<=(n-2);i++)
    {
        x=n1+n2;
        printf("\n%d",x);
        n1=n2;
        n2=x;
        
    }
    return 0;
}