//sum of two matrix using 2D array//
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],y;
    printf("enter first matrix=\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    printf("enter second matrix=\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    } 
    printf("Addition of two matrix=\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            y=a[i][j]+b[i][j];
            printf("%d",y);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}