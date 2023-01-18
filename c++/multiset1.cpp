#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,k;
    cin>>N>>k;

    set<int>s;

    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;

        s.insert(n);
    }
    int mx=0;
    int candies=0;

    for(int i=0;i<k;i++)
    {
        auto it=(--s.end());
        candies=(*it);
        mx=mx+candies;
        s.erase(it);
        s.insert(candies/2);
    }

    cout<<mx;
}