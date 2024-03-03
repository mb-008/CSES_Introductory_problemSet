#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 8;
string chessboard[N];
bool rightdiagonal[2 * (N - 1)], leftdiagonal[2 * (N - 1)], column[N]; // default value is false
int ans = 0;

void putnext(int r)
{

    if (r == N)
    {
        ans++;
        return;
    }

    for (int c = 0; c < N; c++)
    {
        if (column[c] == 0 && leftdiagonal[r - c + N - 1] == 0 && rightdiagonal[r + c] == 0 && chessboard[r][c] == '.')

        {
            column[c] = leftdiagonal[r - c + N - 1] = rightdiagonal[r + c] = true;
            putnext(r + 1);
            column[c] = leftdiagonal[r - c + N - 1] = rightdiagonal[r + c] = false;
        }
    }
}
int main()
{
    for (int i = 0; i < N; i++)
    {
        cin >> chessboard[i];
    }
    putnext(0);
    cout << ans << endl;
    return 0;
}