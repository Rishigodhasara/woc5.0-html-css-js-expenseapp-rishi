//given string is pelindrom or not

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    string str_rev;

    for(int i=str.length()-1;i>=0;i--)
    {
        str_rev.push_back(str[i]);
    }
    if(str == str_rev)
    {
        cout<<"given string is pelindrom";
    }
    else
    {
        cout<<"given string is not pelindrom";
    }

    return 0;
}