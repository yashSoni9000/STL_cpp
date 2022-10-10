#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    priority_queue<int> pq;
    // pq.emplace(1);
    // pq.emplace(5);
    // pq.emplace(4);
    // pq.emplace(6);
    // pq.emplace(3);

    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;

    // pq.emplace(-1);//min priority queue using maximum priority queue
    // pq.emplace(-5);
    // pq.emplace(-4);
    // pq.emplace(-6);
    // pq.emplace(-3);
    // for (int i=0;i<pq.size();i++)
    // {
    //     cout<<-1*pq.top()<<endl;
    //     pq.pop();
    // }

    priority_queue<int,vector<int>,greater<int>> peq; //min priority queue implementation
    peq.emplace(1);
    peq.emplace(5);
    peq.emplace(4);
    peq.emplace(6);
    peq.emplace(3);

    cout<<peq.top()<<endl;

    return 0;
}