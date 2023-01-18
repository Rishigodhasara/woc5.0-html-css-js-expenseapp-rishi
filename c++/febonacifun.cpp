#include<iostream>
using namespace std;

void feb(int n)
{
    int temp1=0;
    int temp2=1;
    cout<<"febonaci series : \n";
    for(int i=1;i<=n;i++)
    {
        cout<<temp1<<endl;
        int nextterm=temp1+temp2;
        temp1=temp2;
        temp2=nextterm;
    }
}
int main()
{
    int n;
    cout<<"Enter any number = ";
    cin>>n;
     
    feb(n);
    
}