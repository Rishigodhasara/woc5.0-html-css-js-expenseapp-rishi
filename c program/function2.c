//with arguments and without return value//
//printf stars//
#include<stdio.h>
int star(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",'*');
    }
}
int main()
{
    int n;
    printf("Enter no. of stars = ");
    scanf("%d",&n);
    star(n);
}