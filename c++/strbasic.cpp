//some basic about string
#include<iostream>
#include<string>

using namespace std;

int main()
{
   // string str1;//1st method to declare string
    //cin>>str1;
    //cout<<str1<<endl;

    string str2(5,'R');//2nd method to declare string
    cout<<str2<<endl;

    string str3="MR R";//3rd method to declare string....direct defined string
    //str3.clear();   for clear whole string
    cout<<str3<<endl;

    string str4;
    getline(cin,str4);//getline use for consider whole line as a string(including space) 
    cout<<str4<<endl;

    string s1="DA";
    string s2="DA";

    cout<<s1+s2<<endl;//append string....method 1

    string s3="DA";
    string s4="IICT";

    s3.append(s4);//append string by direct using command....method 2

    cout<<s3<<endl;

    cout<<str3[3]<<endl;//access character in string

    string s;
    int t;
    cin>>t;
    cin.ignore();//for ignore space
    while(t--)//for multiuple test cases
    {
        getline(cin,s);
        cout<<s<<endl;
    }

    //compare string .....it is equal or not,

    if(s1.compare(s2)==0)//or if(!s1.compare(s2))
    {
        cout<<"string is equal"<<endl;
    }
    else
    {
        cout<<"string is not equal"<<endl;
    }

    //check string is empty or not,

    if(s1.empty())
    {
        cout<<"string is empty"<<endl;
    }
    else
    {
        cout<<"string is not empty"<<endl;
    }

    //erase character in string,

    string s5="science";

    s5.erase(2,3);//erase(at which position u want to erase,how many characters)
    cout<<s5<<endl;

    //find substring in string,
    
    string s6="godhasara";
    cout<<s6.find("hasa")<<endl;//it's return index at where substring is started

    //insert string into another string,

    s6.insert(0,"Rishi");//insert(index where u insert another string,string which u want to insert)
    cout<<s6<<endl;

    cout<<s6.size()<<endl;//size or length of string

    //printf all character of string
     for(int i=0;i<s6.length();i++)
     {
        cout<<s6[i]<<endl;
     }

     //printf any substring 

     cout<<s6.substr(5,9)<<endl;//here print godhasara which is substring of rishigodhasara

     //string to integer

     string s7="33";
     int x = stoi(s7);
     cout<<x<<endl;
     cout<<x+5<<endl;

     //integer to string

     int y=33;
     cout<< to_string(y) + "5"<<endl;//here +5 is append with string "33"....so ans is not 38 but 335.

    return 0;
}