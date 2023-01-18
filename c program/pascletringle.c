//make pascle tringle upto line given by user//
#include<stdio.h>
#include<math.h>
int main()
{
        int temp1,temp2,temp3,n;
        int fact1,fact2,fact3;
        fact1=fact2=fact3=1;
        printf("enter any number n. = ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
             for(int k=n-1;k>=i;k--)
                {
                    printf(" ");
                }
           for(int j=0;j<=i;j++)
           {
               temp1=i;
               temp2=j;
               temp3=i-j;
               while(temp1)
               {
                   fact1=fact1*temp1;
                   temp1--;
               }
               if(temp1=0)  fact1=1;
               while(temp2)
               {
                   fact2=fact2*temp2;
                   temp2--;
               }
               if(temp2=0)  fact2=1;
               while(temp3)
               {
                   fact3=fact3*temp3;
                   temp3--;
               }
               if(temp3=0)  fact3=1;
               int ans=fact1/(fact2*fact3);
               printf(" %d",ans);
               fact1=fact2=fact3=1;
           }
           printf("\n");
        }
    return 0;
}
