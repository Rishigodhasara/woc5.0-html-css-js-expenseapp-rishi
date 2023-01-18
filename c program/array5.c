//Searching of an element in an Array//
#include<stdio.h>
int main()
{
    int a[5],n,p;
    p=0;
    printf("Enter any five numbers of an Array=\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter any numbe n=\n");
    scanf("%d",&n);
    for(int i=0;i<=4;i++)
    {
         if(n==a[i])
         {
            p=1;
         }
    }
    if(p==1)
    {
        printf("Entered number FOUND");
    }
    else
    {
        printf("Entered number NOT FOUND");
    }
    return 0;
}