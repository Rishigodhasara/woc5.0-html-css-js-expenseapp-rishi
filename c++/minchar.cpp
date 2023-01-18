//print character whose ASCII value is smallest
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string str;
    getline(cin , str);

    char ch=str[0];

    for(int i=0 ; i<str.length() ; i++)
    {
            if(ch>str[i])
            {
                ch=str[i];
            }
    }
    cout<<ch;
    return 0;
}
