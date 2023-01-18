//addition of two array//
#include<stdio.h>
int main()
{
    int a[5],b[5],y;
    printf("Enter any five numbers=\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter any five numbers=\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<=4;i++)
    {
             y=a[i]+b[i];
            printf("Addition of array=%d\n",y);
    }
    return 0;
}