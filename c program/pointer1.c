//printf a number which is given by user//
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number =");
    scanf("%d",&num);
    int *p=&num;
    int **q=&p;
    printf("enter number is(by pointer p) = %d\nadress of number(method 1) = %d\nadress of number(method 2) %d\nenter number is(by double pointer q) = %d\nadress of number(by double pointer q) = %d\nadress of pointer p = %d\nadress of  double pointer q = %d",*p,p,&num,**q,*q,q,&q);
    return 0;
}