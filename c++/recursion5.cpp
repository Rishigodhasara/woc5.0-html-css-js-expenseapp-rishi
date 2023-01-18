//stair problem

#include<bits/stdc++.h>
using namespace std;

int way(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
            return (way(n-1) + way(n-2));
    }
}

int main()
{
    int n;
    cin>>n;

    cout<<way(n);
}