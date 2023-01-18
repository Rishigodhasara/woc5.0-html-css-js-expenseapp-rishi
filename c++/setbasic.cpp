//set store only key not value(as map)
//set store unique value and give output in sorted ordered

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string>s;
    s.insert("abc");//O(log(n))
    s.insert("def");
    s.insert("abd");

    for(auto &value : s)
    {
        cout<<value<<endl;
    }

    auto it=s.find("abc");//for find any string into set
    if(it==s.end())
    {
        cout<<"no value"<<endl;
    }
    else
    {
        cout<<"find = "<<(*it)<<endl;
    }
    //for erase any string from set
    if(it!=s.end())
    {
        s.erase(it);
    }
    
     for(auto &value : s)
    {
        cout<<value<<endl;
    }

    //another method to erase string

    s.erase("def");

    //note: .erase is take iterator as well as string directly as input

}