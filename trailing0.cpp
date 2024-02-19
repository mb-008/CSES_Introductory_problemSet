#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        long long int x;
        x = floor(n / (pow(5, i)));
        if (x > 0)
        {
            count += x;
        }
        else
        {
            break;
        }
    }
    cout << count;
    return 0;
}