//find array of next greater element of given array's element

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    int b[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j;
    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                b[i]=a[j];
                break;
            }
        }
        if(j==n)
        {
            b[i]=-1;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}

//time complexity of this code is O(n*n)