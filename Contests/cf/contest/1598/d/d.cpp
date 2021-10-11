#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long int ll;

using PII = pair<ll, ll>;
using VI = vector<ll>;
#define fs first
#define ss second

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> v(n + 1);
    VI topic(n + 1, 0), diff(n + 1, 0);
    // set<ll> s1, s2;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        topic[x]++;
        diff[y]++;
    }

    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i].size() > 1)
        {
            for (auto it : v[i])
            {
                count += (topic[i] - 1) * (diff[it] - 1);
            }
        }
    }

    ll total = n * (n - 1) * (n - 2) / 6;
    cout << total - count << endl;
    return;
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