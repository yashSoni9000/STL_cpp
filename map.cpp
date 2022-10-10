#include<bits/stdc++.h>
using namespace std;

int main ()
{
//key values are unique other data can be identical
    map<string,int> mpp;
    mpp["monish"]=420;//instead of this we can use mpp.emplace("laxkar",420); its slightly faster
    mpp["soni"]=96;
    mpp["sweetu"]=69;
    mpp["foil_paper"]=90000;


    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;//acts as a pair with key values 
    }
    //there are also unordered map similar to sets 
    return 0;
}