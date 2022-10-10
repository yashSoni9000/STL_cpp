#include<bits/stdc++.h>
using namespace std;

int main ()
{

    set<int> st;    //sets are used when the element are not to be repeated
    cout<<"Enter the elements in the set";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    // st.erase(st.begin());//removes a specific element
    // cout <<st.size()<<endl;
    // st.erase(st.begin(), st.begin() + 2 );
    //we can copy set same as we did in vectors
    // st.find(5);//it will point the iterator at that index
    // auto it= st.find(5);
    // //st.clear(); clears the entire set
    // //again the st.emplace() is a bit faster than st.insert()
    for(auto it:st)
    {
        cout<<it<<" ";
    }

    //average time complexity is O(log(n))
    //unordered set store the data not in ascending format hence we should use unordered set but if the question comes as a tle then switch to orderd set
    //multiset stores all the elements in a sorted fashion




    return 0;
}