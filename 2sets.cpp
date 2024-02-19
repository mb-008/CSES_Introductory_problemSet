#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;

    if (sum % 2 != 0) // agar sum odd hai toh answer nahi milega
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl; // agar sum even hai toh answer milega
        vector<ll> f, s;

        if (n % 2 == 0) // agar n even hai toh directly alternating elements ke set banayenge taking first & last element in 1 set
        {

            for (ll i = 1; i <= n / 2; i++)
            {

                if (i % 2 == 0)
                {
                    f.push_back(i);
                    f.push_back(n - i + 1);
                }
                else
                {
                    s.push_back(i);
                    s.push_back(n - i + 1);
                }
            }
        }
        else // agar n odd hai toh n-1 elements ke set banayenge taking first & last element in 1 set & last element in 2nd set & last element us set mein jaayega jiska size kam hai
        {
            for (ll i = 1; i <= n / 2; i++)
            {

                if (i % 2 == 0)
                {
                    f.push_back(i);
                    f.push_back(n - i);
                }
                else
                {
                    s.push_back(i);
                    s.push_back(n - i);
                }
            }
            if (f.size() > s.size())
            {
                s.push_back(n);
            }
            else
            {
                f.push_back(n);
            }
        }
        cout << f.size() << endl;
        for (ll i = 0; i < f.size(); i++)
        {
            cout << f[i] << " ";
        }
        cout << endl;
        cout << s.size() << endl;
        for (ll i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
    }
    return 0;
}