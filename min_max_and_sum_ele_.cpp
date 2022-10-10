#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v;

    for(int i=0 ;i<6;i++)
    {
        cin>>v.emplace_back(i);
    }
    cout<<endl;
    int s=0,cnt=0;
    int a= *min_element(v.begin(),v.end());//its an iterator so we must use * for value at that iterator
    int b= *max_element(v.begin(),v.end());
    s= accumulate(v.begin(),v.end(),0);//used to sum all the elements in the vector
    cnt=count(v.begin(),v.end(),1);
    cout<<a<<" "<<b<<" "<<s<<" "<<cnt;


    return 0;
}