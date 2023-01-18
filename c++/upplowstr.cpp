#include<bits/stdtr1c++.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin , s);

    transform(s.begin() , s.end() , s.begin() , ::toupper);//change whole string into upper

    cout<<s<<endl;

    transform(s.begin() , s.end() , s.begin() , ::tolower);

    cout<<s;

    return 0;
}