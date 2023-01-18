#include<stdio.h>
int main(){
//     int n,a;
//     printf("enter no.");
//     scanf("%d",&n);
//     for(int i=1;i<n;i++)

//     {
// a=n%10;
// n=n/10;
// printf("%d",a);
//     }
int n;
printf("enter any n = ");
scanf("%d",&n);
int number=0;
while(n!=0)
{
    number=number*10;
    number=number+n%10;
    n=n/10;
}
printf("your ans is : %d ",number);
    return 0;
}