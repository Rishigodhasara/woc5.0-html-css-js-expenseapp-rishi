//sorting of string in assending order

#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    string str;
    getline(cin , str);

    char ch;

    for(int i=0 ; i<str.length() ; i++)
    {
        for(int j=i+1 ; j<str.length() ; j++)
        {
            if(str[i]>str[j])
            {
                ch=str[i];
                str[i]=str[j];
                str[j]=ch;
            }
        }
    }
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i];
    }
    return 0;
}