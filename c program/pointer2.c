//swapping by pointer//
#include<stdio.h>
int main()
{
    int a,b,*p,*q,x;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    p=&a;
    q=&b;
    x=*p;
    *p=*q;
    *q=x;
    printf("After Swapping;\nfirst number = %d\nsecond number = %d",a,b);
    return 0;
}