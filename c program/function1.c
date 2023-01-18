//with arrgument with value return//
//addition of two numbers//
#include<stdio.h>
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c=a-b;
    return c;
}
int main()
{
    int a,b,c;
    printf("enter first no.= ");
    scanf("%d",&a);
    printf("enter second no.= ");
    scanf("%d",&b);
    c=sum(a,b);
    printf("Sum is = %d",c);
    c=sub(a,b);
    printf("\nSum is = %d",c);
}