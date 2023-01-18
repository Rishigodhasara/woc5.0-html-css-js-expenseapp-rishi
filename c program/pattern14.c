/*      1
       2 3
      4 5 6
     7 8 9 10     */
#include<stdio.h>
int main()
{
    int i,j,k,l=1,r;
    for(i=1,r=1;i<=3,r<=4;i++,r++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=r;k++,l++)
        {
           printf("%d",l);
           printf("   ");
        }
        printf("\n");
    }
    return 0;
}