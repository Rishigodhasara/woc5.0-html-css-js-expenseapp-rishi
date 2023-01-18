/*vector of vector(same as 2D array but its take dienemic memmory allocation so we will change
size of rows and columns after declare it which is not possible in 2D array)*/

#include<bits/stdc++.h>
using namespace std;

void vectorprint(vector<int>&v)
{
    cout<<"size = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<vector<int>>v;
    int N;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        vector<int>temp;

        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout<<v[0][1]<<endl;//main vector na 0 index na vector no 1 index no element
    v[0].push_back(10);//main vector na 0 index na vector na last ma 10 add thy
    v.push_back(vector<int>(2,1));//another vector add in last of main vector

    for(int i=0;i<v.size();i++)
    {
        vectorprint(v[i]);
    }
    
}