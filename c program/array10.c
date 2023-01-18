//Multiplication of two Matrix by using 2D Array//
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],mult[3][3];
    printf("Enter firsr Matrix=\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second Matrix=\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            mult[i][j]=0;
            for(int k=0;k<=2;k++)
            {
                mult[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multipication of Two Matrix=\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d",mult[i][j]);
            printf(" ");
        }
        printf("\n");
    }
   }