#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long int ll;

void solve()
{
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    ll sum = a + b + c;

    ll max1;

    max1 = a + b + c - 3;
    if (m > max1)
    {
        cout << "NO" << endl;
        return;
    }

    if (2 * max(c, max(a, b)) - (sum + 1) > m)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}