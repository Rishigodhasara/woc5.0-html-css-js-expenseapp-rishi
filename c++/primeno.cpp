#include<iostream>
using namespace std;

int main()
{
    int i,n,temp;
    cin>>n;
    temp=0;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            cout<<"Number is not Prime";
            break;
        }
    }
    if(i==n)
    cout<<"Number is Prime";
    return 0;
}