#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1 || n==0)return 1;
    else 
    return n*fact(n-1);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int p,q;
        cin>>p>>q;

        int n=min(p,q);

        cout<<fact(n)<<endl;
        
    }
}