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
    ll n, k;
    cin >> n >> k;
    k += 1;
    ll ans = 0;
    vector<ll> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (k > 0)
        {
            ll x = pow(10, arr[i + 1] - arr[i]) - 1;
            ll val = min(x, k);
            ans += (pow(10, arr[i]) * val);
            k -= val;
        }
    }
    ans += k * pow(10, arr[n - 1]);
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