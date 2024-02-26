#include <bits/stdc++.h>
using namespace std;
// Recursive function to calculate src & dest

void towerofhanoi(int n, int src, int help, int dest)
{
    if (n > 0)
    {
        towerofhanoi(n - 1, src, dest, help);
        cout << src << " " << dest << endl;
        towerofhanoi(n - 1, help, src, dest);
    }
}

int main()
{
    int n;
    cin >> n; // number of disk
    cout << pow(2, n) - 1 << endl;
    towerofhanoi(n, 1, 2, 3);
}