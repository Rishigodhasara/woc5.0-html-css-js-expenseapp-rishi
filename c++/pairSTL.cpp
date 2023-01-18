//pair in STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string>p;
    p=make_pair(2,"abc");// or p={2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;

    //copy of pair

    pair<int,string>p1=p;
    cout<<p1.first<<" "<<p1.second<<endl;

    p1.first=(3);

    cout<<p.first<<" "<<p.second<<endl;//output is 2 abc, because p1 is copy of p
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int ,string>&p2=p;

    p2.first=3;
    cout<<p.first<<" "<<p.second<<endl;//output is 3 abc , because p2 is reference of p
    cout<<p2.first<<" "<<p2.second<<endl;
    
    //take input by user

    pair<int , string>p3;
    cin>>p3.first>>p3.second;
    cout<<p3.first<<" "<<p3.second;
}