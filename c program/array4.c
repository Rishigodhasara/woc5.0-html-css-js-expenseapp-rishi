//Reverse of an Array//
#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter any five numbers=\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse of an Array=\n");
    for(int i=4;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}