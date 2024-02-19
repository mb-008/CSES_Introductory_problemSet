#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main()
{
    int n, r = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        r = (r * 2) % mod;
    }
    cout << r;
    return 0;
}