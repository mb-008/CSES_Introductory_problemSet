// https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ans += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << ans << endl;
    return 0;
}