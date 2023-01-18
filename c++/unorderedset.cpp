/* unordered set is same as ordered set just only two differences
   1. time complexity is O(1) and
   2. not give output in sorted order form*/
//QUE;

/* give N string and Q queries,
   in each querie u are given a string,
   say yes if present otherwise no*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string>s;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;

        s.insert(str);
    }

    int q;
    cin>>q;

    while(q--)
    {
        string str;
        cin>>str;

        auto it=s.find(str);
        if(it==s.end())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}