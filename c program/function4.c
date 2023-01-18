//without argument and without return value//
//addition of two numbers//
#include<stdio.h>
int sum()
{
    int a,b,c;
    printf("Enter first no.= ");
    scanf("%d",&a);
    printf("Enter second no.= ");
    scanf("%d",&b);
    c=a+b;
    printf("Sum is = %d",c);
}
int main()
{
    sum();
    
}