//A BC DEF GHIJ KLMNO//
#include<stdio.h>
int main()
{
    int i,j;
    char x;
    x='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",x);
            x=x+1;
        }
        printf("\n");
    }
    return 0;
}
