#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

#define ll long long
#define rep(i, a) for (ll int i = 0; i < a; i++)
#define di(a) \
    ll int a; \
    cin >> a;

int main()
{
    quick

        di(n)
            ll int x;
    cin >> x;
    vector<ll int> v(n);
    ll int ans = 0;
    rep(i, n) cin >> v[i];
    for (ll int i = 0; i < n; i++)
    {
        ll int mn = 0, mx = n, tmp = n;
        while (mn < mx)
        {
            int mid = (mn + mx) / 2;
            if (v[mid] <= x + v[i])
            {
                tmp = mid;
                mn = mid + 1;
            }
            else
            {
                mx = mid;
            }
        }
        // tmp is the last index such that v[tmp]<=x+v[i]
        // cout << tmp << " ";
        ll int z = (tmp - i) * (tmp - i - 1) / 2;
        ans += max(0LL, z);
    }
    cout << ans << endl;
    return 0;
}