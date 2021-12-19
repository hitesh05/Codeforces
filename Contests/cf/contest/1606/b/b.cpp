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
    ll ans = 0;
    ll pwsofar = 0;
    --n;
    while (n)
    {
        ll pw = (1LL << pwsofar);
        if (pw > k)
        {
            break;
        }
        if (pw >= n)
        {
            n = 0;
            ++ans;
            break;
        }
        n -= (1LL << pwsofar);
        ++ans;
        pwsofar++;
    }
    //cout << ans << '\n';
    ll need = ceil(n / (long double)k);
    ans = ans + need;
    cout << ans << '\n';
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