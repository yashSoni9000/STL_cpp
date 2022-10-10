#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
    list<int> ls;
    ls.emplace_front(1);
    ls.emplace_front(1);
    ls.emplace_front(2);
    ls.emplace_back(5);
    ls.emplace_back(6);

    for (auto it:ls)
    {
        cout<<it<<" ";
    }

    cout<<endl;

    ls.remove(1);//it is the fastest time to remove and element
    for (auto it:ls)
    {
        cout<<it<<" ";
    }


    return 0;
}