//5432112345
//5432  2345
//543    345
//54      45
//5        5
//54      45
//543    345
//5432  2345
//5432112345//
#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        for(l=2;l<=i;l++)
        {
            printf("  ");
        }
        for(k=i;k<=5;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(l=1;l<=4;l++)
    {
        for(m=5;m>=5-l;m--)
        {
            printf("%d",m);
        }
        for(n=3;n>=l;n--)
        {
            printf("  ");
        }
        for(o=5-l;o<=5;o++)
        {
            printf("%d",o);
        }
        printf("\n");
    }
    return 0;
}
