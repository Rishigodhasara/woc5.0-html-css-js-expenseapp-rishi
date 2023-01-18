/*convert binory into decimal*/
#include<iostream>
using namespace std;

int binarytodecimal(int n)
{
    int ans,x;
    ans=0;
    x=1;
    
    while(n>0)
    {
        int y=n%10;
        ans=ans+x*y;
        x=x*2;
        n=n/10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter any binary number = ";
    cin>>n;
    cout<<"Decimal number is : "<<binarytodecimal(n);
}