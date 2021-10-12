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

const ll mod = 998244353;
ll MOD(ll n)
{
    return int(n % mod);
}

ll power(ll a, ll b, ll m)
{
    if (b == 0)
        return 1;
    ll d = power(a, b / 2, m);
    d = (d * d) % m;
    if (b & 1)
        d = (d * a) % m;
    return d;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = n; i < 2 * n; i++)
    {
        ans += v[i];
        ans = MOD(ans);
    }
    for (int i = 0; i < n; i++)
    {
        ans -= v[i];
        ans = MOD(ans);
    }

    ll fact1 = 1, fact2 = 1;
    for (int i = 1; i <= n; i++)
    {
        fact1 *= i;
        fact1 = MOD(fact1);
    }
    for (int i = 1; i <= 2 * n; i++)
    {
        fact2 *= i;
        fact2 = MOD(fact2);
    }

    ll sum = MOD(fact2 * MOD(power(fact1, mod - 2, mod) * power(fact1, mod - 2, mod)));

    sum *= ans;
    sum = MOD(sum);

    cout << sum << endl;
    return;
}

int main()
{
    quick

    solve();

    return 0;
}