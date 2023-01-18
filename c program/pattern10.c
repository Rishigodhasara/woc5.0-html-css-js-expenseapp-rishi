//    1
//   121
//  12321
// 1234321
//123454321
// 1234321
//  12321
//   121
//    1    //
#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o,p;
    for(i=1;i<=5;i++)
    {
        for(j=5-i;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(l=i-1;l>=1;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    for(m=1;m<=4;m++)
    {
        for(n=1;n<=m;n++)
        {
            printf(" ");
        }
        for(o=1;o<=5-m;o++)
        {
            printf("%d",o);
        }
        for(p=4-m;p>=1;p--)
        {
            printf("%d",p);
        }
        printf("\n");
    }
    return 0;
}