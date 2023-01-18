//given two numbers by user,now add them and substract them and assign them to a and b by using calling by reference//
#include<stdio.h>
void add(int*x,int*y)
{
        *x=*x+*y;
}
void sub(int*x,int*y)
{
        *y=*x-*y-*y;
}
int main()
{
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    add(&a,&b);
    printf("a = %d",a);
    sub(&a,&b);
    printf("\nb = %d",b);
}