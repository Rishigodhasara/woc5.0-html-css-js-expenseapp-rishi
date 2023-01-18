/*queues = FIFO(first in first out) type data structure so whatever we enter in queue is always add 
  at last position of queue*/

/* we can perform 3 type of operation in queue
1. push(use for enter values in queue)
2.pop(use for remove front element(which is added first) of queue)
3.front(for view the front element of queue(which added first))...use for print the element of queue*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string>q;

    q.push("rishi");
    q.push("godhasara");
    q.push("MR R");
    q.push("patel");

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();//remove element as same as order how they are enter in queue(fifo)
    }
}
