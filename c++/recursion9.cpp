//insertion sort by recursion

#include<bits/stdc++.h>
using namespace std;

void sort(int *a,int n,int i)
{
    if(i>=n)
    {
        return;
    }
    int curr=a[i];
    int j=i-1;
    while(a[j]>curr && j>=0)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=curr;
    i++;

    sort(a,n,i);
    
}

int main()
{
    int n;
    cin>>n;

    int i=1;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,n,i);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}