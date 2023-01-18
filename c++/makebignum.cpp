//make greatest number using string

#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin , s);

    sort(s.begin() , s.end() , greater<int>());

    cout<<"greatest number is "<<s;

    return 0;
}