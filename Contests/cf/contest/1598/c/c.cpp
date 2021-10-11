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
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll total = 0;
    for (auto &i : v)
    {
        cin >> i;
        total += i;
    }
    if ((2 * total) % n != 0)
    {
        cout << "0" << endl;
        return;
    }

    ll x = 2 * total / n;
    map<ll, ll> m;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        count += m[x - v[i]];
        m[v[i]]++;
    }
    cout << count << endl;
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