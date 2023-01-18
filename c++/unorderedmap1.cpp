/* given N strings and Q queries
   in each query you are given a string
   print frequency of that string*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int>m;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }

    int q;
    cin>>q;
     while(q--)
     {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
     }
  }

