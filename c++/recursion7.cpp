//cheak pelindrom

#include<bits/stdc++.h>
#include<string>
using namespace std;

void cheak(string str,int i,int j)
{
    
    if(i>j)
    {
        cout<<"pelindrom";
    }
    else
    {
            if(str[i]==str[j])
            {
                i++;
                j--;
                cheak(str,i,j);
            }
            else
            {
                cout<<"not pelindrom";
            }
    }
}

int main()
{
    string str;
    cin>>str;

    int i=0,j=str.length()-1;

    cheak(str,i,j);

}