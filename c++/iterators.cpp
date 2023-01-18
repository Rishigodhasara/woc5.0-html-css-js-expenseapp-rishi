//iterators in stl which is most off same as pointer(not 100%)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5,6};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it=v.begin();// it=v.begin() is point the value at 0th index of vector 
    cout<<"first element of vector = "<<(*it)<<endl;
    cout<<"second element of vector = "<<(*(it+1))<<endl;//*(it+1) is move to next location
    cout<<"second element of vector = "<<(*(++it))<<endl;//*(++it) is move to next iterator

    //in case of vector ....it+1 & it++ both are same bcz vector are continuous memory location 

    for(it=v.begin();it!=v.end();it++)// it=v.end() is point the next to last index of vector
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    //iterator point to pair

    vector<pair<int,int>>vp={{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it1;
    
    for(it1=vp.begin();it1!=vp.end();it1++)
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
    }

    //second method to write cout when iterator point any pair
    for(it1=vp.begin();it1!=vp.end();it1++)
    {
        cout<<(it1->first)<<" "<<(it1->second)<<endl;
    }

    //range base loop (for making code very sort)

    for(int value : v)// value is copy of vector v's element 
    {
        value++;
        //cout<<value<<" ";
    }

    for(int value : v) 
    {
        cout<<value<<" ";//here same values are print as above bcz change in value it not change in v
    }
    cout<<endl;

    for(int &value : v)//it is call by reference so vector v na element ni value ma store thy 6..not copy
    {
        value++;
    }

    for(int value : v)
    {
        cout<<value<<" ";//all values are added by 1
    } 

    //auto keyword is automatically takeing data type of variable

    auto a=10.65;
    cout<<a<<endl;

     vector<pair<int,int>> :: iterator it2;
    
    for(it2=vp.begin();it2!=vp.end();it2++)
    {
        cout<<(*it2).first<<" "<<(*it2).second<<endl;
    }

    //sort method to write above code 
    
    for(auto it2=vp.begin();it2!=vp.end();it2++)
    {
        cout<<(*it2).first<<" "<<(*it2).second<<endl;
    }
    cout<<endl;

    //use both auto and range base loop

    for(auto &value : vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

}