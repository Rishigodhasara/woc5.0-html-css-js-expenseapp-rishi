//find grace marks bt switch//
#include<stdio.h>
int main()
{
    int class,fail;
    printf("Enter student's class no=");
    scanf("%d",&class);
    printf("Enetr number of subject in which stu. failed=");
    scanf("%d",&fail);
    switch(class)
    {
        case 1:
                if(fail>3)
                    printf("not get any grace marks");
                else
                    printf("get 5 marks per subject");
                break;
        case 2:
                if(fail>2)
                    printf("not get any grace marks");
                else
                    printf("get 4 marks per subject");
                break;
        case 3:
                if(fail>1)
                    printf("not get any grace marks");
                else
                    printf("get 5 marks per subject");
                break;
        default:
                printf("Entered student's class is wrong");
    }
    return 0;
}