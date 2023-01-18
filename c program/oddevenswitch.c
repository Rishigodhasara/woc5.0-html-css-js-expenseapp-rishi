//odd even by switch//
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no.=");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:
        
        printf("number is even");
        break;
        
        default:
        
        printf("number is odd");
    }
    return 0;
}