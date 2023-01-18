/*unordered map have 3 main difference compare to map
  1.inbuilt implimantation
  2.time complexity
  3.valid key data type*/

  /* complex data type is not allow as key of unordered map ...like unordered_map<pair<int,int>>*/

  #include<bits/stdc++.h>
  using namespace std;

  int main()
  {

  unordered_map<int,string>m;
    m[1]="abc";//time complexity of insert value in map is O(1)
    m[5]="def";
    m[3]="abd";
    m[5]="rishi";
    m.insert({4,"afg"});//another method to insert value in map

     unordered_map<int,string> :: iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;//O(1)
    }
  }