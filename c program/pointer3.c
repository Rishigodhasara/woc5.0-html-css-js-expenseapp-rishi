//call by reference//
#include<stdio.h>
int changevalue(int*adress)
{
    *adress=150;
}
int main()
{
        int a;
        a=50;
        printf("value pf a is now = %d\n",a);
        changevalue(&a);
        printf("value of a is now = %d\n",a);
        return 0;
}