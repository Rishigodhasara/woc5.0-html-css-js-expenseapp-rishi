//decide the balaced parenthisis using stack
/*means given pair of brackets are properly opening and closing or not
for ex 1....((())) is balanced parenthisis but ((()) is not balanced bcz 1 closing bracket is missing
ex.2  ({()}) is balanced but ({(})) is not balanced bcz first must closed ')'then close'}'*/

#include<bits/stdc++.h>
using namespace std;

map<char,int>symbol={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

int main()
{
    stack<char>st;
    string s;
    cin>>s;

    for(char bracket : s)
    {
        if(symbol[bracket]<0)st.push(bracket);
        else
        {
            if(st.empty()){
            cout<<"NO"<<endl;
            break;
            }
            char top = st.top();
            st.pop();

            if(symbol[top] + symbol[bracket] != 0){
            cout<<"NO"<<endl;
            break;
            }
        }
    }
    if(st.empty())
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}