/*input= student name and their marks.
  output needed is arrange student by decresing order of thier marks and if marks are same of any
  student then follow lexigraphical order to print their name*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
   /* multiset<pair<int,string>>s;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int marks;
        cin>>marks;
        string name;
        cin>>name;

        s.insert({marks,name});
    }

    for(auto it : s)
    {
        cout<<it.second<<" "<<it.first<<endl;
    }  */

    /*in above logic we can't able to write name in decresing order of marks bcz
      set always store keys in sorted order and here pair is key of set*/

    map<int,multiset<string>>m;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int marks;
        cin>>marks;

        string name;
        cin>>name;

        m[marks].insert(name);
    }
    auto curr_it = --m.end();
     while(true){
        auto &student = (*curr_it).second;
        auto &mark = (*curr_it).first;
    for(auto &students_name : student)//here we need one more iterator bcz student is set
     {
        cout<<students_name<<" "<<mark<<endl;
     }
     if(curr_it==m.begin())break;
        curr_it--;
     }
     
}