//say number....like 1..so ONE

#include<bits/stdc++.h>
#include<string>
using namespace std;

int say(int n,string *a)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
    int digit=n%10;
    n=n/10;

    say(n,a);
    cout<<a[digit]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;

    string arr[10]={"zere","one","two","three","four","five","six","seven","eight","nine"};

    say(n,arr);

}