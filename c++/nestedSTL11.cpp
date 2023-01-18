#include<bits/stdc++.h>
using namespace std;

int main()
{
     map<int,multiset<string>>m;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int marks;
        cin>>marks;

        string name;
        cin>>name;

        m[(-1)*marks].insert(name);
    }
      for(auto &pr : m)
      {
        auto &students=pr.second;
        auto &mark = pr.first;
        for(auto student : students)
        {
            cout<<student<<" "<<(-1)*mark<<endl;
        }
      } 
}
