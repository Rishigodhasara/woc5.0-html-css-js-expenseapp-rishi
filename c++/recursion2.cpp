//sum of array using recursion

#include<bits/stdc++.h>
using namespace std;

int sum(int *a,int n)
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
    return(*(a+n-1)+sum(a,n-1));//or return(a[n-1]+sum(a,n-1))
    }
}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<sum(a,n);
}