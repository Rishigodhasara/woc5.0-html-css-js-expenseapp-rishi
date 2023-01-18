//basic of vector
//vector have dinemic memory so it change its memory value
 
#include<iostream>
#include<vector>
using namespace std;

void vectorprint(vector<int>v) 
{
    cout<<endl<<"size = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)//time complacity of v.size() is O(1)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(7);//no effect bcz it is copy not reference call
}

void stringvectorprint(vector<string>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}


int main()
{
    vector<int>v;
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
       // vectorprint(v);//for prove that vector have dienemic memory
        v.push_back(x);//time com. = O(1)
    }
    vectorprint(v);

    vector<int>v1(10);//if only size of vector are given then its print all '0'
    vectorprint(v1);

    //add element after declar vector

    vector<int>v2(10);
    v2.push_back(7);
    vectorprint(v2);

    //declar vector size and value of its element

    vector<int>v3(10,3);
    vectorprint(v3);

    //remove last elemnt of vector

    vector<int>v4;
    v4.push_back(1);
    v4.push_back(2);
    vectorprint(v4);
    v4.pop_back();//O(1)
    vectorprint(v4);    

    //copy of vector

    vector<int>v5=v;//T.C = O(n) bcz it is work as same as loop
    v5.push_back(6);
    vectorprint(v5);
    vectorprint(v);//here not add '6' bcz v5 is copy of v so change is only apply in v5

    //refernce call

    vector<int>&v6=v;
    v6.push_back(6);
    vectorprint(v6);
    vectorprint(v);//here '6' is print bcz v6 is not copy of v but its only refernce call

    //string vector

    vector<string>v7;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v7.push_back(s);
    }
    stringvectorprint(v7);
    
}