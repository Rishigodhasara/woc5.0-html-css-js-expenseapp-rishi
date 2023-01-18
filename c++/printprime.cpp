#include<iostream>
using namespace std;

int main()
{
    int i,j,a,b;
    cout<<"Enter any two numbers : "<<endl;
    cin>>a>>b;

    for(i=a;i<=b;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}