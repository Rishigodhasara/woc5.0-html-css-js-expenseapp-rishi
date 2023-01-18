//check enter three numbers are pythagorean triplet or not//
#include<iostream>
using namespace std;

bool check(int x,int y,int z)
{
    int a,b,c;
    a=max(x,max(y,z));
    
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if((a*a)==(b*b+c*c))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num1,num2,num3;
    cout<<"Enter any three numbers :\n";
    cin>>num1>>num2>>num3;
    
    if(check(num1,num2,num3))
    {
        cout<<"pythagorean triplet";
    }
    else
    {
        cout<<"not pythagorean triplet";
    }
}