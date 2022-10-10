#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
    // queue<int> q;
    // q.emplace(1);
    // q.emplace(2);
    // q.emplace(3);
    // q.emplace(4);
    // q.emplace(5);
    
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;

    // while(!q.empty())
    // {
    //     cout<< q.front()<<endl;
    //     q.pop();
    // }
    // cout <<endl;
    

    deque<int> dq;//we generally do not use dequeue instead we use lists
    dq.emplace_front(1);
    dq.emplace_back(2);
    dq.emplace_front(7);
    dq.emplace_back(3);
    dq.emplace_front(4);
    dq.emplace_front(6);
    // dq.pop_back();
    dq.pop_front();

    for(auto it:dq)
    {
        cout<<it<<endl;
    }



    return 0;
}