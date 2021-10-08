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

ll sum(ll n)
{
    return (((n * (n + 1)) / 2));
}

void solve()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << -1 << " " << 1 << endl;
        return;
    }
    if (n > 0)
        cout << -1 * (n - 1) << " " << n << endl;
    else
        cout << n << " " << -1 * (n + 1) << endl;
}

int main()
{
    quick

        int t;
    cin >> t;
    //cout << t << endl;
    while (t--)
    {
        solve();
    }
}