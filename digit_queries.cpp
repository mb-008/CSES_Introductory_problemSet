#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll a, ll b)
{
    ll res = 1;

    while (b--)
    {
        res = res * a;
    }
    return res;
}
int main()
{
    ll q, k;
    cin >> q;
    while (q--)
    {
        cin >> k;
        ll n = 1, sum = 0;
        do
        {
            sum = sum + 9 * n * power(10, n - 1);
            n++;
        } while (k >= sum);
        n--;

        // number away
        ll away = (sum - k) / n;
        ll remainder = (sum - k) % n;

        // CAlcualting the number
        ll number = (power(10, n) - 1) - away;
        string result = to_string(number);
        cout << result[result.size() - 1 - remainder] << endl;
    }
}