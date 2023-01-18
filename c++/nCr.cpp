#include<iostream>
using namespace std;

int fec(int a)
{
    int f=1,i;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int n,r;
    cin>>n>>r;

    int ans=(fec(n)/(fec(r)*fec(n-r)));
    cout<<ans;
}