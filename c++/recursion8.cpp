//bubble sort by recursion

#include<bits/stdc++.h>
using namespace std;

void sort(int *a,int n)
{
    if(n==0 || n==1)
    {
        return;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
        sort(a,n-1);
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

    sort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}