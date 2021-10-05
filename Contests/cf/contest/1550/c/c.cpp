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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    if (n <= 2)
    {
        cout << (n * (n + 1)) / 2 << endl;
        return;
    }

    ll ans = 2 * n - 1;

    for (int i = 0; i < n - 2; i++)
    {
        if (!(v[i + 1] >= min(v[i], v[i + 2]) && (v[i + 1] <= max(v[i], v[i + 2]))))
        {
            ans++;
        }
    }

    for (int i = 0; i < n - 3; i++)
    {
        if (!(v[i + 1] >= min(v[i], v[i + 3]) && v[i + 1] <= max(v[i], v[i + 3])))
        {
            if (!(v[i + 2] >= min(v[i], v[i + 3]) && v[i + 2] <= max(v[i], v[i + 3])))
            {
                if (!(v[i + 1] >= min(v[i], v[i + 2]) && v[i + 1] <= max(v[i], v[i + 2])))
                {
                    if (!(v[i + 2] >= min(v[i + 1], v[i + 3]) && v[i + 2] <= max(v[i + 1], v[i + 3])))
                    {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    quick

        int t;
    cin >> t;
    //cout << t << endl;
    while (t--)
    {
        solve();
    }
}