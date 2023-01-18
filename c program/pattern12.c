//ABCDEFGFEDCBA
//ABCDEF FEDCBA
//ABCDE   EDCBA
//ABCD     DCBA
//ABC       CBA
//AB         BA
//A           A//
#include<stdio.h>
int main()
{
    char x;
    x='A';
    for(int i=1;i<=7;i++)
    {
        printf("%c",x);
        x=x+1;
    }
    char y;
    y='F';
    for(int j=1;j<=6;j++)
    {
        printf("%c",y);
        y=y-1;
    }
    printf("\n");
    char z,a;
    for(int k=1;k<=6;k++)
    {
        z='A';
        for(int l=6;l>=k;l--)
        {
            printf("%c",z);
            z=z+1;
        }
        for(float m=1;m<=k;m+=0.5)
        {
            printf(" ");

        }
        a='G'-k;
        for(int n=6;n>=k;n--)
        {
            printf("%c",a);
            a=a-1;
        }
        printf("\n");
    }
    return 0;
}