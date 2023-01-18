//serch element in 2D array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;

    int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    int x;
    cin>>x;

    bool flag=false;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==x)
            {
                flag=true;
                cout<<"row is = "<<i<<endl<<"column is = "<<j<<endl;
            }
        }
    }
    if(flag)
    {
        cout<<"element present";
    }
    else{
        cout<<"element not present";
    }
    return 0;
}