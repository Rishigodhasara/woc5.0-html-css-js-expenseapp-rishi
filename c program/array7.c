//Sorting of an Array in assending/desending order//
#include<stdio.h>
int main()
{
    int a[5],y;
    printf("Enter any five numbers=\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
        if(a[i]>a[j])
            {
                 y=a[i];
                 a[i]=a[j];
                 a[j]=y;
            }
        }
    }
    printf("Sorting of an Array in assending order=\n");
    for(int i=0;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }
    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if(a[i]<a[j])
            {
                y=a[i];
                a[i]=a[j];
                a[j]=y;
            }
        }
    }
    printf("Sorting of an Array in desendind order=\n");
    for(int i=0;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;

}