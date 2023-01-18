//    *
//   ***
//  *****
// *******
//*********
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5-i;j>=1;j--)
        {
            printf(" ");
        }
        for(float k=1;k<=i;k+=0.5)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}