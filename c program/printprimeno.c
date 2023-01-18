/* print prime numbers like...
   2 3 5 7 .....*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter any no.=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=2;j<=(i-1);j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
         if(i==j)
            {
            printf("%d",i);
            printf("\n");
            }
    }
    return 0;
}