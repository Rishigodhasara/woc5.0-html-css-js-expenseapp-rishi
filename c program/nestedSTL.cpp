/*write a program for full name of any student and no. of subject and also marks corresponding 
  their subject */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,string>,vector<int>>m;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string firstname,lastname;
        cin>>firstname>>lastname;
        int sub;
        cin>>sub;
        for(int j=0;j<sub;j++)
        {
            int x;
            cin>>x;

            m[{firstname,lastname}].push_back(x);
        }
    }

    for(auto &pr : m)
    {
        auto &fullname = pr.first;//denote pair(key of map)
        auto &list=pr.second;//denote value of map(which is vector)

        cout<<fullname.first<<" "<<fullname.second<<" ";
        cout<<list.size()<<endl;
        for(auto &element : list)//because here list store a vector so we need unother iterator to print it.
        {
            cout<<element<<" ";
        }
        cout<<endl;

        //OR

        /*vector<int>::iterator it;

        for(it=list.begin();it!=list.end();it++)
        {
            cout<<(*it)<<" ";
        }
        cout<<endl;  */
    }
}