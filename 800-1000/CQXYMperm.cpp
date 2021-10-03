#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick   \
    cin.tie(0); \
    ios_base::sync_with_stdio(false);

typedef long long int ll;

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    n *= 2;
    vector<ll> v(n + 1);
    v[1] = 1;
    v[2] = 1;
    for (ll i = 3; i <= n; i++)
    {
        v[i] = (i * v[i - 1]) % ll(mod);
    }

    cout << v[n] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
