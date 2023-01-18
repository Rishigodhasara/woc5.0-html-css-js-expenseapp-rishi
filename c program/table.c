#include<stdio.h>
//table of any number//
int main()
{
    int i,j,k,N,M;
    printf("enter any no. N=");
    scanf("%d",&N);
    printf("enter M=");
    scanf("%d",&M);
    for(i=N,j=1,k=N;j<=M;j++,k+=N)
    {
        printf("%d*%d=%d\n",i,j,k);
    }
    return 0;
}