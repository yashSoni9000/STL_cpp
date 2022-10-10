#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v;
    for(int i=0 ;i<6;i++)
    {
        cin>>v.emplace_back(i);
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    // sort(v.begin()+1,v.end()-2);

    for(auto it:v)
    {
        cout<<it<<" ";
    }

    return 0;
}