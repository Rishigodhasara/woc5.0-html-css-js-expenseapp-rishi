//Enter 5 numbers and add +5 in everyone//
#include<stdio.h>
int main()
{
    int a[5];
    printf("enter any five numbers=\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=4;i++)
    {
        a[i]=a[i]+5;
        printf("+5=%d\n",a[i]);
    }
    return 0;
}