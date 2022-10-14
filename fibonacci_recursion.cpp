#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1000000007;
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return (fibonacci(n - 1) + fibonacci(n - 2)) % M;
}
int main()
{
    int N;
    cin >> N;
    cout << fibonacci(N);
    return 0;
}