//A AB ABC ABCD ABCDE//
#include<stdio.h>
int main()
{
    int i,j;
    char x;
    x='A';
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",x+j);
        }
        printf("\n");
    }
    return 0;
}