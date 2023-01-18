 #include<iostream>
using namespace std;

 int main()
 {
    int n,number;
    cout<<"Enter any Number = ";
    cin>>n;
    number=0;
    while(n!=0)
    {
        number=number*10;
        number=number+n%10;
        n=n/10;
    }
    cout<<"Reverse of given number is = "<<number;
    return 0;
 }