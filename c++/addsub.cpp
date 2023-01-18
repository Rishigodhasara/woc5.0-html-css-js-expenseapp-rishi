#include<iostream>
using namespace std;

int main()
{
    int amount1,amount2;
    cout<<"Enter any 2 amount :"<<endl;
    cin>>amount1;
    cin>>amount2;

    int sum=amount1+amount2;
    int sub=amount1-amount2;

    cout<<"addition is = "<<sum<<endl;
    cout<<"subtraction is = "<<sub;

    return 0;
}