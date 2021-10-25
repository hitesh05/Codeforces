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
    int n;
    cin >> n;
    VI v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    // ll sum = accumulate(v.begin(),v.end(),0);
    sort(v.begin(), v.end());
    int num_zero = 0, num_one = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            num_zero++;
        }
        else if (v[i] == 1)
        {
            num_one++;
        }
        else
        {
            break;
        }
    }
    if (num_one == 0)
    {
        cout << 0 << endl;
        return;
    }

    ll x = pow(2, num_zero);
    ll ans = ll(num_one)*x;
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