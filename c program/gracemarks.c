//find grace marks for students using if else//
#include<stdio.h>
int main()
{
    int class,fail;
    printf("Enter student's class=");
    scanf("%d",&class);
    printf("Enter number of sub.in which stu.fail=");
    scanf("%d",&fail);
    if(class==1&&(fail)>3)
    {
        printf("not get any grace marks");
    }
    if(class==1&&(fail)<=3)
    {
        printf("get 5 marks per subject");
    }
    if(class==2&&(fail)>2)
    {
            printf("not get any grace marks");
    }
    if(class==2&&(fail)<=2)
    {
        printf("get 4 marks per subject");
    }
    if(class==3&&(fail)>1)
    {
        printf("not get any grace marks");
    }
    if(class==3&&(fail)==1)
    {
        printf("get 5 marks per subject");
    }
    if(class!=(1)&&class!=(2)&&class!=(3))
    {
        printf("Entered student's class is incorrect");
    }
       return 0;
}