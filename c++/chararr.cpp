//check given character array is pelindrom or not

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bool flag=true;

    for(int i=0;i<=(n-1)/2;i++)
    {
        if(arr[i]==arr[n-1-i])
        {
            continue;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"pelindrom";
    }
    else
    {
        cout<<"not pelindrom";
    }
    return 0;
}