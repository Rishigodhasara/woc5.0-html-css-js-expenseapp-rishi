/* multiset is used to store same value in set and print value in sorted order
   as same as set*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<string>s;
    s.insert("abc");//O(log(n))
    s.insert("def");
    s.insert("bcd");
    s.insert("abc");

    for(auto &value : s)
    {
        cout<<value<<endl;
    }

    auto it=s.find("abc");
    if(it!=s.end())
    {
        s.erase(it);//erase by give iterator...erase only value which is pointed by iterator
    }
    cout<<"after erase by iterator :"<<endl;
    for(auto &value : s)
    {
        cout<<value<<endl;
    }

    //erase by give direct value

    s.erase("abc");//erase all this value present in multiset 
    cout<<"after erase by give direct value :"<<endl;
    for(auto &value : s)
    {
        cout<<value<<endl;
    }

    //so always use erase by give iterator not give direct value
}