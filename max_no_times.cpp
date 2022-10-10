#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    unordered_map<int,int> um;
    int n;
    cin>>n;
    int x;
    int maxi=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        um[x]++;
        if (um[x]>um[maxi])
        {
            maxi=x;
        }
    }
    cout<<x<<endl;  

    return 0;
}