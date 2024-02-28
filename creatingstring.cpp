#include <bits/stdc++.h>
using namespace std;
int N;
char S[9];

int main()
{
    cin >> S;
    N = (int)strlen(S);
    sort(S, S + N);
    set<string> perms;

    perms.insert(S);
    while (next_permutation(S, S + N))
        perms.insert(string(S, S + N));

    cout << perms.size() << '\n';
    for (string perm : perms)
    {
        cout << perm << '\n';
    }
    return 0;
}