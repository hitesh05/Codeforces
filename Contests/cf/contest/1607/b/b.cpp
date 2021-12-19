#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long int ll;

using PII = pair<int, int>;
using VI = vector<int>;
#define fs first
#define ss second

void solve()
{
    ll x, n;
    cin >> x >> n;
    ll nn = 1 + (n / 4) * 4;
    for (ll i = nn; i <= n; i++)
    {
        if (x % 2 == 0)
            x -= i;
        else
            x += i;
    }
    cout << x << '\n';
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

    return 0;
}