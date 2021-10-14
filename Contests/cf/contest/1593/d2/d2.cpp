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

    sort(v.begin(), v.end());

    if (v[0] == v[n / 2])
    {
        cout << -1 << endl;
        return;
    }

    VI d;
    int ans =0;
    for (int z = n / 2; z < n; z++)
    {
        for (int i = 0; i < z; i++)
        {
            for (int j = i + 1; j < z; j++)
            {
                int diff = v[j] - v[i];
                if (diff != 0)
                    d.push_back(diff);
            }
        }
        int k;
        k = __gcd(d[0], d[1]);
        for (int i = 1; i < d.size() - 1; i++)
        {
            k = __gcd(k, d[i + 1]);
            if (k == 1)
            {
                break;
            }
        }
        ans = max(ans,k);
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