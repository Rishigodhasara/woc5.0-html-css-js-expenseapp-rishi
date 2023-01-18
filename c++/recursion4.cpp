//febonaci by recursion

#include<bits/stdc++.h>
using namespace std;

int feb(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    return feb(n-1)+feb(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<feb(n);
}