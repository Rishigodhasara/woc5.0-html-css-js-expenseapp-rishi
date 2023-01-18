#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    
    string s;
    getline(cin,s);

    int mx=0;
    int curr=0;
     int i=0;
        while(i<s.length())
        {
            if(s[i]==' ')
            {
                mx=max(curr,mx);
                curr=0;
            }
            else if(s[i]==s[s.length()-1])
            {
                curr++;
                mx=max(curr,mx);
            }
            else
            {
                curr++;
            }
           
           i++;
        }

    cout<<mx;

    return 0;
}