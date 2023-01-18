//reverse string by comparing

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin , str);

    string str_rev;

    int p;

    for(int i=0 ; i<str.length()/2 ; i++)
    {
        if(str[i]==str[str.length()-1-i])
        {
            p=1;
        }
        else
        {
            p=-1;
            break;
        }
    } 
    if(p==1)
    {
        cout<<"string is pelindrom";
    }
    else
    {
        cout<<"string is not pelindrom";
    }

    return 0;
}