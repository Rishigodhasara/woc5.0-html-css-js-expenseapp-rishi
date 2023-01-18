/*ask input to user untill user give negative input and then 
print and add all odd and even number which is given by user*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number = "<<endl;
    int sum1=0;
    int sum2=0;

    do
    {
        cin>>n;
        if(n>=0)
        {
            if(n%2==0)
            {
                sum1=sum1+n;
            }
            else
            {
                sum2=sum2+n;
            }
        }
    } while (n>=0);

    cout<<"sum of even number is = "<<sum1<<endl;
    cout<<"sum of odd number is = "<<sum2;
    return 0;
}