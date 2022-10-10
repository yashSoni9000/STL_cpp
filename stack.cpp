#include <bits/stdc++.h>
using namespace std;

int main ()
{
    
    stack<int> st;
    st.emplace(1);
    st.emplace(2);
    st.emplace(3);
    st.emplace(4);
    st.emplace(5);

    cout<<st.top()<<endl;
    st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;

    cout<<st.size()<<endl;

    bool flag=st.empty();
    while(!st.empty())
    {
        st.pop();
    }
    
    if(!st.empty())
    {
        cout<<st.top()<<endl;
        
    }
    else
    {
        cout<<"Empty";
    }



    return 0;
}