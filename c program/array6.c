//Finding max/min number in array//
#include<stdio.h>
int main()
{
    int a[5],y;
    printf("Enter any five numbers=\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    y=a[0];
    for(int i=0;i<=4;i++)
    {
        if(y>a[i])
        {
            y=a[i];
        }
    }
    printf("Minimum number in array is = %d",y);
    for(int i=0;i<=4;i++)
    {
        if(y<a[i])
        {
            y=a[i];
        }
    }
    printf("\nMaximum number in Array is = %d",y);
    return 0;
}
