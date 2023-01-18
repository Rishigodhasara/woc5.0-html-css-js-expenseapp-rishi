//stack =LIFO(last in first out)type data structure so whatever we inter in stack is always enter top of stack
//in stack we will accsess only top value(which is add at last) and size of stack
/* we can perform 3 operation on stack
1. push (which is use for enter element in stack)
2. pop(which is use for remove top element(last added) of stack)
3. top(which is for view  the top element(last added) of stack)....use for print stack's element*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty())// s.empty() is a boolien so its return true if stack is empty otherwise false
    {
        cout<<s.top()<<endl;
        s.pop();//remove element in order of lifo
    }
}