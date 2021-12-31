#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;

using PII = pair<int, int>;
using VI = vector<int>;
#define fs first
#define ss second

ll acc_floor(ll a, ll b)
{
    ll val = a / b;
    while (val * b > a)
        val--;
    return val;
}

void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    VI v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(),v.end());

    vector<ll> p(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        p[i + 1] = p[i] + v[i];
    }

    ll ans = INT_MAX;

    for (int y = 0; y < n; y++)
    {
        ll x = v[0] - acc_floor(k - p[n - y] + v[0], y + 1);
        ans = min(ans, y + max(0LL, x));
    }

    cout << ans << endl;
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