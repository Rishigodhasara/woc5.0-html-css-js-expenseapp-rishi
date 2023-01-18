/*make simple calculator using switch-case*/
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter any Two numbers : "<<endl;
    cin>>num1>>num2;
    
    char op;
    cout<<"Enter any character = ";
    cin>>op;

    switch(op)
    {
        case '+':
                    cout<<num1+num2;
                    break;
        case '-':
                    cout<<num1-num2;
                    break;
        case '*':
                    cout<<num1*num2;
                    break;
        case '/':
                    cout<<num1/num2;
                    break;
        default:
                    cout<<"use valid operator";
    }
    return 0;
}