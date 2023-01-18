#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin , str);

    string str_rev;

    /*for(int i=str.length()-1;i>=0;i--)
    {
        str_rev=str_rev + str[i];
    }
    cout<<str_rev<<endl;*/

    for(int i=str.length()-1;i>=0;i--)
    {
        str_rev.push_back(str[i]);//push_back() tends for add character after previous string
    }
    cout<<str_rev<<endl;

    return 0;
}