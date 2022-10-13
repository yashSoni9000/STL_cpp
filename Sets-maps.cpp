#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2, 5, 3, 1, 5};
    // Set is used to store unique element in a sorted manner
    //     set<int> st;
    //     int n, x;
    //     cin>>n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> x;
    //         st.insert(x); // insert function takes log(n) time;
    //     }
    //     st.erase(st.begin());                 // It will erase the first element from the set
    //     //st.erase(st.begin(), st.begin() + 2); // posn of  Start iterartor and last iterator
    //  st.erase(5);//It will delete the particular key;
    //  set<int>s={1,4,5,6};
    //  //Find function returns an iterator
    //  auto it=st.find(7);//log(n)

    // st.insert(8);
    // for(auto it:st)
    //  cout<<it<<" ";
    //  cout<<endl;

    // Unordered Set
    unordered_set<int> s1; // Can be any order
    s1.insert(2);
    s1.insert(3);
    s1.insert(8);
    s1.insert(6);
    for (auto it : s1)
        cout << it << " ";
    cout << endl;
    // Multiset
    multiset<int> ms; // Stoes all the values ,therefore no constarint of having unique values
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.count(2);
    for (auto it : ms)
        cout << it << " ";
    cout << endl;
    // Functions for ordered ,unorder and multiset are same-begin(),end(),erase(),clear(),find()

    // Maps
    map<string, int> mp; // Maps are sorted according to unique keys
    mp["abir"] = 20;
    mp["manash"] = 50;
    mp["chandana"] = 43;
    mp.emplace("abir", 21);
    auto it = mp.find("abir"); // Points where abir is stored
    // Print the map
    for (auto it1 : mp)
        cout << it1.first << " " << it1.second << endl;
    mp.count("abir"); // Always return 1 as it stores only 1
    mp.erase("abir"); // Delete the value based on key
    mp.erase(mp.begin(), mp.end());

    mp.clear();
    mp.empty(); // Checks if map is empty or not

    //Pair class
    pair<int,int>p;
    p.first=1;
    p.second=2;
    //Nested pair
    pair<pair<int,int>,int>p1={{1,2},3};
    cout<<p1.first.second<<endl;  //Accessing the second value of first pair
    //different stl pairs
    vector<pair<int,int>>vec={{1,2},{3,4},{5,6}};
    set<pair<int,int>>st;
    map<pair<int,int>,int>mp;

    //Multimap;
    multimap<string,int>mpp=
   {{"abir",21},{"abir",22}};
   multimap<string,int>mp1;
   mp1.emplace("raj",1);
   mp1.emplace("raj",2);
   
   // Map Traversing using begin() and end()
//    int arr[] = { 1, 1, 2, 1, 1, 3, 4, 3 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    map<int, int> m;
//    for (int i = 0; i < n; i++)
//        m[arr[i]]++;
//
//    cout << " Element Frequency" << endl;
//    for (auto i = m.begin(); i != m.end(); i++)
//        cout << i->first << "      " << i->second<< endl;


   return 0;
}
