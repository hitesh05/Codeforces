#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;

void solve(int a, int b, set<int> &s)
{
    int x, y;
    int total = a + b;
    x = total / 2;
    y = x;
    if (total % 2 != 0)
    {
        x++;
    }

    // int z = abs(a - b);
    // z = z / 2;

    for (int i = 0; i <= x; i++)
    {
        int j;
        j = a - x + i;

        if (j >= 0 && j <= y)
        {
            s.insert(i + j);
        }
    }
}

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        set<int> s;

        solve(a, b, s);
        solve(b, a, s);
        cout << s.size() << endl;
        for (auto i : s)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}