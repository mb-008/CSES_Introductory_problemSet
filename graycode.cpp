#include <bits/stdc++.h>
using namespace std;

vector<string> generateGray(int n)
{
    // Base case
    if (n <= 0)
        return {"0"};

    if (n == 1)
    {
        return {"0", "1"};
    }

    // Recursive case
    vector<string> recAns =
        generateGray(n - 1);
    vector<string> mainAns;

    // Append 0 to the first half
    for (int i = 0; i < recAns.size(); i++)
    {
        string s = recAns[i];
        mainAns.push_back("0" + s);
    }

    // Append 1 to the second half
    for (int i = recAns.size() - 1; i >= 0; i--)
    {
        string s = recAns[i];
        mainAns.push_back("1" + s);
    }
    return mainAns;
}

void generateGrayarr(int n)
{
    vector<string> arr;
    arr = generateGray(n);
    // print contents of arr
    for (int i = 0; i < arr.size();
         i++)
        cout << arr[i] << endl;
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    generateGrayarr(n);
    return 0;
}
