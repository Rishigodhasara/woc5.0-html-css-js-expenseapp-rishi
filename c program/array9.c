//Inverse of a matrix by 2D array//
#include<stdio.h>
int main()
{
    int a[3][3];
    printf("Enter any Matrix=\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Inverse of Matrix=\n");
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}