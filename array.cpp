#include<bits/stdc++.h>
using namespace std;

int main()
{

    array<int,5> arr={1,2,3,4,5};
    // arr.fill(10);  fills the whole array by the number
    int size=arr.size();
    cout<<"the array is"<<endl;
    arr.at(3);
    for (int i = 0; i < size; i++)
    {
        cout<<arr.at(i);
    }
    cout<<endl;
 //   cout<<arr.begin();//begin points towards the address of first element of array
//end points towards the address after the last address. Similarly rbegin points towards the address of last element of array
//rends points towards the address before the starting element of array
    for (auto it =arr.begin(); it !=arr.end();it++)
    {
        cout <<*it;//here 'it' is a pointer
    }
    cout<<endl;
    for (auto it :arr)
    {
        cout<<it;//here 'it' is the value itself
    }
    cout<<endl;
    int start=arr.front();
    cout<<start<<endl;
    int last=arr.back();
    cout<<last<<endl;
    return 0;
}