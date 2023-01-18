/*armstrong number is that number in which cube of all digits and add them
  so we gain original number....for ex 153=1+125+27=153*/

#include<iostream>
using namespace std;

int main()
{
    int n,original;
    cout<<"Enter any number = ";
    cin>>n;
    original=n;
    int sum=0;
    while(n!=0)
    {
        int last=n%10;
        sum+=(last*last*last);
        n=n/10;
    }
    if(sum==original)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not Armstrong number";
    }
    return 0;
}