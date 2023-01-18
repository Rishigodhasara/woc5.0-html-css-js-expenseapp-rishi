//map is a data structure which is store (key ,value) pair
//map's key are print in sorted order always
//key of map is always unique means use any key only one time otherwish value is change at that key
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="abc";//time complexity of insert value in map is O(logn) where n is current size of map
    m[5]="def";
    m[3]="abd";
    m[5]="rishi";
    m.insert({4,"afg"});//another method to insert value in map

    map<int,string> :: iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;//O(logn)
    }

    //print map using auto key word and base loob

    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    auto it1=m.find(3);//m.find() is return a iterator
    if(it1==m.end())
    {
        cout<<"no value"<<endl;
    }
    else
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
    }
    if(it1!=m.end())//it1==m.end() then error bcz iterator which is not exists is not allow to give erase 
    {
        m.erase(it1);
    }

    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    /*note: m["abcd"]="abcd"  time complexity of this type of map is not O(logn) bcz mpa always 
    compare key to all previous key and then print in sorted way 

    so here time complexity is s.sixe()*O(logn) */
    
}