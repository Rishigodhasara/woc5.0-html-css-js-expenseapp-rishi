//find length of longest arithmetic array 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    
    int ans=2;
    int pd=arr[1]-arr[0];
    int current=2;

    for(int i=2;i<n;i++)
    {
        if(pd==arr[i]-arr[i-1])
        {
            current++;
        }
        else
        {
            pd=arr[i]-arr[i-1];
            ans=max(ans,current);
            current=2;
        }
    }
    cout<<ans;
}