#include<bits/stdc++.h>


using namespace std;

int main()
{
    string str;
    getline(cin , str);
    
    sort(str.begin() , str.end());//sort into assending order

    cout<<str<<endl;
    
    sort(str.begin() , str.end() , greater<char>());//sort in disending order

    cout<<str;
    return 0;

}