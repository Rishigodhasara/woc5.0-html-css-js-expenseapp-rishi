/*find number of element which is bigger than all element which is befor it and 
big than element which is just after it*/

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

    int current = 0;
    for(int i=0;i<n;i++)
    {
        int p=0;
        int j=i-1;

        while(j>=0)
        {
            if(arr[i]>arr[j] && arr[i]>arr[i+1])
            {
                p=1;
            }
            else
            {
                p=0;
                break;
            }
            j--;
        }
        if(p==1)
        {
            current++;
        }
    } 
    if(arr[0]>arr[1])
    {
        current++;
    }

    int j=n-2;
    int x=0;
    while (j>=0)
    {
            if(arr[n-1]>arr[j])
            {
                x=3;
            }
            else{
                x=0;
                break;
            }
            j--;
    }
    if(x==3)
    {
        current++;
    }
    cout<<current;

    return 0;
}