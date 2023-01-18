//selection sort by recurstion

#include<bits/stdc++.h>
using namespace std;

void sort(int *a,int n,int i)
{
    if(i==n-1)
    {
        return;
    }
    for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);
        }
    }
    i++;

    sort(a,n,i);
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
    int i=0;
    sort(a,n,i);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}