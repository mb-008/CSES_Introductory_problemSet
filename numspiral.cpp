#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int y, x;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> y >> x;
        long long int result = 0;

        if (x == y)
        {
            result = x * x - x + 1;
        }
        else if (y > x)
        {
            if (y % 2 == 0)
            {
                result = y * y - x + 1;
            }
            else
            {
                result = (y - 1) * (y - 1) + x;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                result = (x - 1) * (x - 1) + y;
            }
            else
            {
                result = x * x - y + 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}