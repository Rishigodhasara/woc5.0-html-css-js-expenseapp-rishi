//vector of array

#include<bits/stdc++.h>
using namespace std;

void vectorprint(vector<int>&v)
{
    cout<<"size = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int N;
    cin>>N;
    vector<int>v[N];

    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    cout<<v[0][1]<<endl;//means print element which is on index 1 in array's 1st element(1st vector)
    for(int i=0;i<N;i++)
    {
        vectorprint(v[i]);
    }
}